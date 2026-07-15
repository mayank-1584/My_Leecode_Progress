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

    bool isside(TreeNode* root, TreeNode* subRoot){
        if(root == NULL || subRoot == NULL)return root == subRoot;

        bool checkl = isside(root -> left , subRoot->left);
        bool checkr = isside(root -> right , subRoot->right);

        return checkl && checkr && root->val == subRoot->val;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL || subRoot == NULL)return root == subRoot;

        if(root->val == subRoot->val && isside(root,subRoot))return true;

        return isSubtree(root->left , subRoot) || isSubtree(root->right , subRoot); 

    }
};