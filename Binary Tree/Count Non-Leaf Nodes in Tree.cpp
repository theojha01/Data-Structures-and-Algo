class Solution {
  public:
    int countNonLeafNodes(Node* root) {
        int c=0;
        if(root==NULL){
            return 0;
        }
        if(root==NULL || root->left==NULL && root->right==NULL){
           return 0; 
        }
        c++;
        c+= countNonLeafNodes(root->left) + countNonLeafNodes(root->right);
        return c;
    }
};
