class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> countMap;
        int goodPairs = 0;

        for (int num : nums) {
            goodPairs += countMap[num];
            countMap[num]++;
        }

        return goodPairs;
    }
};