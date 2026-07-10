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
    TreeNode* build(vector<int>&preorder,vector<int>&inorder,int st,int end,int &preIndex){
        if(st > end){
            return nullptr;
        }
        TreeNode* root = new TreeNode(preorder[preIndex]);
        preIndex++;
        int i = st;
        while(inorder[i] != root->val){
            if(inorder[i] == root->val){
                break;
            }
            i++;
        }

        root->left = build(preorder,inorder,st,i-1,preIndex);
        root->right = build(preorder,inorder,i+1,end,preIndex);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIndex = 0;
        return build(preorder,inorder,0,inorder.size()-1,preIndex);;
    }
};