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
    int widthOfBinaryTree(TreeNode* root) {
        deque<pair<TreeNode*, unsigned long long int>> deq;
        deq.push_back({root, 0});
        int maxwidth = 0;
        while (deq.size() > 0) {
            int currsize = deq.size();
            unsigned long long stidx = deq.front().second;
            unsigned long long endidx = deq.back().second;
            maxwidth = max(maxwidth, (int)(endidx - stidx + 1));

            for (int i = 0; i < currsize; i++) {
                auto curr = deq.front();
                deq.pop_front();
                if (curr.first->left) {
                    deq.push_back({curr.first->left, curr.second * 2 + 1});
                }
                if (curr.first->right) {
                    deq.push_back({curr.first->right, curr.second * 2 + 2});
                }
            }
        }
        return maxwidth;
    }
};