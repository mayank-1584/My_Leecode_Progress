
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return NULL;
        if(root->val == p-> val || root-> val == q-> val)return root;

        TreeNode * lst = lowestCommonAncestor(root-> left , p , q);
        TreeNode * rst = lowestCommonAncestor(root-> right , p , q);

        if(lst && rst){
            return root;
        }else if(lst != NULL){
            return lst;
        }else{
            return rst;
        }
    }
};