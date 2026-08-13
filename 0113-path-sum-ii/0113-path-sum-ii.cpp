class Solution {
public:

    void helper(TreeNode* root, int targetSum,vector<vector<int>>& ans,vector<int>& path,int currentSum) {

        if (root == NULL)
            return;

        path.push_back(root->val);
        currentSum += root->val;

        if (root->left == NULL && root->right == NULL) {
            if (currentSum == targetSum) {
                ans.push_back(path);
            }
        }

        helper(root->left, targetSum, ans, path, currentSum);
        helper(root->right, targetSum, ans, path, currentSum);

        path.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> path;

        helper(root, targetSum, ans, path, 0);

        return ans;
    }
};