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

    int maxsum = INT_MIN;
    int solve(TreeNode* root){
        if(root == nullptr){
            return 0;
        }

        int left = solve(root->left);
        int right = solve(root->right);
        int paththorughnode = root->val+left+right;
        int pathtoparent = root->val+max(left,right);
        int rootonly = root->val;
        maxsum = max({maxsum,paththorughnode,pathtoparent,rootonly});
        return max(pathtoparent,rootonly);
    }
    int maxPathSum(TreeNode* root) {
        solve(root);
        return maxsum;
    }
};
