class Solution {
public:
    void backtrack(vector<int>& nums, int idx, int n,
                   vector<int>& temp, vector<vector<int>>& res) {
        if (idx == n) {
            res.push_back(temp);
            return;
        }
        backtrack(nums, idx + 1, n, temp, res);
        temp.push_back(nums[idx]);
        backtrack(nums, idx+1, n, temp, res);
        temp.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;
        vector<vector<int>> res;
        backtrack(nums, 0, n, temp, res);
        return res;
    }
};