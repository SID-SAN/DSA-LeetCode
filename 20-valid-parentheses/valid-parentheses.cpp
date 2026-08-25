class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (s[i] == '(')
                stk.push(')');
            else if (s[i] == '{')
                stk.push('}');
            else if (s[i] == '[')
                stk.push(']');
            else if (stk.empty() || stk.top() != s[i]) {
                return false;
            } 
            else {
                stk.pop();
            }
        }
        return stk.empty();
    }
};