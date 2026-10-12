class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> uni;
        for (char c : s) {
            uni.insert(c);
        }
        return uni.size();
    }
};