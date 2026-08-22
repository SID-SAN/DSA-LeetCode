class Solution {
public:
    void backtrack(vector<int>& candidates, int target, int idx, int n, int sum,
                   vector<int>& temp, vector<vector<int>>& res) {
        if (idx == n || sum >= target) {
            if (sum == target) {
                res.push_back(temp);
            }
            return;
        }

        if (sum + candidates[idx] <= target) {
            temp.push_back(candidates[idx]);
            sum += candidates[idx];
            backtrack(candidates, target, idx + 1, n, sum, temp, res);
            sum -= candidates[idx];
            temp.pop_back();
        }

        while (idx + 1 < n && candidates[idx] == candidates[idx + 1]) {
            idx++;
        }
        backtrack(candidates, target, idx + 1, n, sum, temp, res);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n = candidates.size();
        sort(candidates.begin(), candidates.end());
        vector<int> temp;
        vector<vector<int>> res;
        backtrack(candidates, target, 0, n, 0, temp, res);
        return res;
    }
};