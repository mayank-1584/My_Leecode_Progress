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

    int sum =0;

    void sol (TreeNode* root , int pathsum){
        if(root == NULL)return ;
        
        pathsum = pathsum*10 + root ->val;

        if(root-> left == NULL && root-> right == NULL){
            sum += pathsum;
            return; 
        }
         sol(root->left , pathsum);
         sol(root->right , pathsum);
    }

    int sumNumbers(TreeNode* root) {

        int pathsum =0;
        sol(root,pathsum);
        return sum;
        
    }
};