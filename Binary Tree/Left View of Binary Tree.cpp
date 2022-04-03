void pretree(Node *root,vector<int> &v1, int level){
    if(root==NULL){
        return;
    }
    if(v1.size()==level){ //0-0,1-1
        v1.push_back(root->data);
    }
    pretree(root->left, v1, level+1);
    pretree(root->right, v1, level+1);
    
}
vector<int> leftView(Node *root)
{
   vector<int>v;
   pretree(root,v,0);
   return v;
}
