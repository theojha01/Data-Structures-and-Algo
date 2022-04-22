class Solution {
public:
    void left(Node *root,vector<int>& v){
        if(!root){
            return ;
        }
        if(root->left==NULL && root->right==NULL){
            return;
        }
        v.push_back(root->data);
        if(root->left){
            left(root->left,v);
        }
        else{
            left(root->right,v);
        }
    }
    void leaves(Node *root,vector<int>& v){
        if(!root){
            return ;
        }
        if(root->left==NULL && root->right==NULL){
            v.push_back(root->data);
            return;
        }
        leaves(root->left,v);
        leaves(root->right,v);
    }
    void right(Node *root,vector<int>& v){
        if(!root){
            return ;
        }
        if(root->left==NULL && root->right==NULL){
            return;
        }
        if(root->right){
            right(root->right,v);
        }
        else{
            right(root->left,v);
        }
        v.push_back(root->data);
    }
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> v1;
        if(!root){
            return v1 ;
        }
        v1.push_back(root->data);
        left(root->left,v1);
        leaves(root->left,v1);
        leaves(root->right,v1);
        right(root->right,v1);
        return v1;
        
    }
};
