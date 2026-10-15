#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> map = {};

        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++; // ++ to keep track of freqencies when iterating
        }

        std::vector<int> answer{};

        for (int i = 0; i < k; i++) {
            int highest_freq{}; // most frequent number so far
            int value{}; // key of highest_freq

            for (auto it = map.begin(); it != map.end(); it++) {
                if (it->second > highest_freq) {
                    highest_freq = it->second;
                    value = it->first;
                }
            }
            answer.push_back(value); // add to vector 
            map.erase(value);
        }

        return answer;
    }
};