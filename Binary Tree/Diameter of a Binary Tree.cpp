class Solution {
  public:
    int calheight(Node* root){
        if(root==NULL){
            return 0;
        }
        return max(calheight(root->left),calheight(root->right))+1;
    }
    int diameter(Node* root) {
        // Your code here
        if(root==NULL){
            return 0;
        }
        int lh=calheight(root->left);
        int rh=calheight(root->right);
        int curdia=lh+rh+1;
        int ld=diameter(root->left);
        int rd=diameter(root->right);
        return max(curdia,max(ld,rd));
    }
};
