/*
https://leetcode.com/problems/increasing-order-search-tree/
*/

class Solution {
public:
    void inorder(TreeNode* root, TreeNode*& aku){
        if(!root){
            return;
        }
        inorder(root->left,aku);
        TreeNode* newnode= new TreeNode(root->val);
        aku->right=newnode;
        aku=aku->right;
        inorder(root->right,aku);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* aku=new TreeNode(0);
        TreeNode* xyz=aku;
        inorder(root,aku);
        return xyz->right;
    }
};
