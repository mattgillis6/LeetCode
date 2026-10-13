#include <iostream>
#include <unordered_set>

class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_multiset<char> letters = {};
        for (char c : s) {
            letters.insert(c);
        }
        for (char c2 : t) {
            if (letters.contains(c2)) {
                letters.erase(letters.find(c2));
            }
            else {
                return false;
            }
        }
        return letters.empty();
    }
};