class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.empty()) return 0;

        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        int ans = 0;
        int prev_end = intervals[0][1];

        for (int i = 1; i < n; i++) {
            if (intervals[i][0] < prev_end) {
                ans++;
                prev_end = min(prev_end, intervals[i][1]);
            } 
            else {
                prev_end = intervals[i][1];
            }
        }

        return ans;
    }
};