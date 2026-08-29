class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char, int> freq;
        int left = 0;
        int count = 0;
        int n = s.length();

        for (int right = 0; right < n; right++) {
            freq[s[right]]++;

            while (freq['a'] > 0 && freq['b'] > 0 && freq['c'] > 0) {
                count += (n - right);
                freq[s[left]]--;
                left++;
            }
        }

        return count;
    }
};