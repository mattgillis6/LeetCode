#include <iostream>
#include <unordered_set>

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> set(nums.begin(), nums.end());
        int longest_sequence{ 1 };
        int next_number{};

        if (set.size() == 0) {
            return 0;
        }

        for (int i = 0; i < nums.size(); i++) {

            if (set.contains(nums[i] - 1)) {
                continue;
            }
            if (set.contains(nums[i] + 1)) {
                next_number = nums[i] + 1;

                while (set.contains(next_number)) {
                    longest_sequence++;
                    next_number++;
                }
            }
        }
        return longest_sequence;
    }
};