class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";
        int i = n - 1;

        while (i >= 0) {
            while (i >= 0 && s[i] == ' ') {
                i--;
            }
            if (i < 0)
                break;

            int high = i;

            while (i >= 0 && s[i] != ' ') {
                i--;
            }
            int low = i + 1;

            string word = s.substr(low, high - low + 1);
            if (ans.length() > 0) {
                ans += " ";
            }
            ans += word;
        }
        return ans;
    }
};