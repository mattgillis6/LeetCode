class Solution {
public:
    int romanToInt(string s) {

        int number{ 0 };
        int temp{ 0 };
        int loop_number{ 0 };

        for (int i = s.length() - 1; i >= 0; i--) {

            switch (s[i]) {
            case 'I':
                loop_number = 1;
                break;
            case 'V':
                loop_number = 5;
                break;
            case 'X':
                loop_number = 10;
                break;
            case 'L':
                loop_number = 50;
                break;
            case 'C':
                loop_number = 100;
                break;
            case 'D':
                loop_number = 500;
                break;
            case 'M':
                loop_number = 1000;
                break;
            }
            if (temp > loop_number) {
                number = number - loop_number;
            }
            else {
                number = number + loop_number;
            }
            temp = loop_number;
        }
        return number;
    }
};