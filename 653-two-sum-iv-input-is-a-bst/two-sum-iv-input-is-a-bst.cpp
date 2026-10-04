/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> nums;
        stack<TreeNode*> st;
        TreeNode* curr = root;

        while (curr != nullptr || !st.empty()) {
            while (curr != nullptr) {
                st.push(curr);
                curr = curr->left;
            }
            curr = st.top();
            st.pop();
            nums.push_back(curr->val);
            curr = curr->right;
        }

        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int current_sum = nums[left] + nums[right];
            if (current_sum == k) {
                return true;
            } else if (current_sum < k) {
                left++;
            } else {
                right--;
            }
        }

        return false;
    }
};