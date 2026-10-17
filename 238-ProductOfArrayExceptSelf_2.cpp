#include <iostream>
#include <vector>

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        std::vector<int> answer(nums.size());

        int prefix{ 1 };
        int suffix{ 1 };

        for (int i = 0; i < nums.size(); i++) {
            answer[i] = prefix;
            prefix *= nums[i];
        }

        for (int j = nums.size() - 1; j >= 0; j--) {
            answer[j] *= suffix;
            suffix *= nums[j];
        }

        return answer;
    }
};