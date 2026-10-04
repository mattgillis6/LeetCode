#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string str = std::to_string(x);
        std::string rev_str = str;
        std::reverse(rev_str.begin(), rev_str.end());

        return str == rev_str;
    }
};