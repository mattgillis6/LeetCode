class Solution {
public:
    int search(vector<int>& nums, int target) {

        int low{ 0 };
        int high{};
        high = nums.size() - 1;
        int middle{};

        while (low <= high) {
            middle = (high + low) / 2;

            if (target < nums[middle]) {
                high = middle - 1;
            }
            else if (target > nums[middle]) {
                low = middle + 1;
            }
            else {
                return middle;
            }
        }
        return -1;
    }
};