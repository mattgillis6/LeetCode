#include <iostream>
#include <vector>

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        std::vector<int> answer = {};
        std::vector<int> prefix_array = {};
        std::vector<int> suffix_array(nums.size());

        int prefix{ 1 };
        int suffix{ 1 };

        for (int i = 0; i < nums.size(); i++) {
            prefix_array.push_back(prefix);
            prefix *= nums[i];
        }

        for (int j = nums.size() - 1; j >= 0; j--) {
            suffix_array[j] = suffix;
            suffix *= nums[j];
        }

        for (int k = 0; k < nums.size(); k++) {
            answer.push_back(prefix_array[k] * suffix_array[k]);
        }
        return answer;
    }
};