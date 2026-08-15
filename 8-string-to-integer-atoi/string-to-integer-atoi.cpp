class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        int sign = 1;
        long long result = 0;
        int i = 0;

        while (i < n && s[i] == ' ') {
            i++;
        }

        if (s[i] == '-') {
            sign = -1;
            i++;
            if(i<n && s[i]=='+'){
                return 0;
            }
        }
        if (s[i] == '+') {
            i++;
            if(i<n && s[i]=='-'){
                return 0;
            }
        }

        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            if (result > INT_MAX / 10 ||
                (result == INT_MAX / 10 && digit > INT_MAX % 10)) {
                if(sign==-1){
                    return INT_MIN;
                }
                else{
                    return INT_MAX;
                }
            }

            result = result * 10 + digit;
            i++;
        }
        return result * sign;
    }
};