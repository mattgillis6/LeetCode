#include <stack>
#include <map>

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        map<char, char> brackets;
        brackets[')'] = '(';
        brackets['}'] = '{';
        brackets[']'] = '[';

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stack.push(s[i]);
            }
            else {
                if (stack.empty()) {
                    return false;
                }
                if (brackets[s[i]] == stack.top()) {
                    stack.pop();
                }
                else {
                    return false;
                }

            }
        }
        return stack.empty();
    }
};