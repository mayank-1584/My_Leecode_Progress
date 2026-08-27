
class Solution {
public:

    TreeNode* helper (vector<int>& nums , int st, int end){
        if(st > end){
            return NULL;
        }

        int mid = st + (end-st)/2;
        TreeNode* root = new TreeNode(nums[mid]); 


        root->left = helper(nums , st  , mid-1);
        root->right = helper(nums , mid+1 , end);

        return root;
    }

    vector<int> nums(ListNode* head){
        vector <int> ans ;
        ListNode* pos = head;
        while(pos != NULL){
            ans.push_back(pos->val);
            pos = pos->next;
        }

        return ans;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        vector <int> ans = nums(head);
        return helper (ans , 0 , ans.size()-1);
    }
};