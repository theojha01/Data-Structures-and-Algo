/*
https://leetcode.com/problems/diameter-of-binary-tree/
*/

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int dia=0;
        height(root, dia);
        return dia;
    }
private:
    int height(TreeNode* node, int &dia){
        if(!node){
            return 0;
        }
        int lheight=  height(node->left, dia);
        int rheight=  height(node->right, dia);
        dia = max(dia, lheight+rheight);
        return 1+max(lheight,rheight);
    }
};
