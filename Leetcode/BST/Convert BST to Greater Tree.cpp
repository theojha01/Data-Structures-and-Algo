/*
Input: root = [4,1,6,0,2,5,7,null,null,null,3,null,null,null,8]
Output: [30,36,21,36,35,26,15,null,null,null,33,null,null,null,8]
*/

class Solution {
public:
    
    void treee(TreeNode* root, int &a){
        if(!root){
            return;
        }
        treee(root->right,a);
        root->val=a+root->val;
        a=root->val;
        treee(root->left, a);
    }
    TreeNode* convertBST(TreeNode* root) {
        int a1=0;
        treee(root, a1);
        return root;
    }
};
