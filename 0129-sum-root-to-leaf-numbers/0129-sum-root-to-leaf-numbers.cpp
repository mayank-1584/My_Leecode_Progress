/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    vector<string> allvalue(TreeNode* root) {

    if (root == NULL)
        return {};

    if (root->left == NULL && root->right == NULL) {
        return {to_string(root->val)};
    }

    vector<string> ans;

    vector<string> left = allvalue(root->left);
    vector<string> right = allvalue(root->right);

    for (string s : left) {
        ans.push_back(to_string(root->val) + s);
    }

    for (string s : right) {
        ans.push_back(to_string(root->val) + s);
    }

    return ans;
}

    int sumNumbers(TreeNode* root) {
        vector<string> yoyo = allvalue(root);
        int ans = 0;
        for(string s : yoyo){
            ans += stoi(s);
        }
        return ans;
    }
};