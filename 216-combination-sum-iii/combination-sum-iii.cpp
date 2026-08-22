class Solution {
public:
    void backtrack(vector<int>& candidates, int n, int idx, int k, int sum,
                   vector<int>& temp, vector<vector<int>>& res) {
        if (idx == 9 || sum >= n || temp.size()==k) {
            if (sum == n) {
                if (temp.size() == k) {
                    res.push_back(temp);
                }
            }
            return;
        }

        if (sum + candidates[idx] <= n) {
            temp.push_back(candidates[idx]);
            sum += candidates[idx];
            backtrack(candidates, n, idx + 1, k, sum, temp, res);
            sum -= candidates[idx];
            temp.pop_back();
        }

        backtrack(candidates, n, idx + 1, k, sum, temp, res);
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> candidates = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        vector<int> temp;
        vector<vector<int>> res;
        backtrack(candidates, n, 0, k, 0, temp, res);
        return res;
    }
};