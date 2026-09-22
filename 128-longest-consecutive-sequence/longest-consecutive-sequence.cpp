class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mpp(nums.begin(), nums.end());
        int longest = 0;

        for (int num : mpp) {
            if (!mpp.count(num - 1)) {
                int currentNum = num;
                int currentStreak = 1;

                while (mpp.count(currentNum + 1)) {
                    currentNum++;
                    currentStreak++;
                }

                longest = max(longest, currentStreak);
            }
        }

        return longest;
    }
};