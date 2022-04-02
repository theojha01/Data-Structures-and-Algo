int countLeaves(Node* root)
{
 
  int count=0;
  
  if(root==NULL){
        return 0;
  }
  if(root->left==NULL && root->right==NULL){
      count++;
  }
  count+=countLeaves(root->left);
  count+=countLeaves(root->right);
  
  return count;
}
