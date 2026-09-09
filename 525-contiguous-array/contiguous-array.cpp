class Solution {
public:
    int findMaxLength(std::vector<int>& nums) {
        unordered_map<int, int> mpp;
        mpp[0] = -1;

        int maxLength = 0;
        int sum = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 1) {
                sum++;
            } else {
                sum--;
            }

            if (mpp.count(sum)) {
                maxLength = max(maxLength, i - mpp[sum]);
            } else {
                mpp[sum] = i;
            }
        }

        return maxLength;
    }
};