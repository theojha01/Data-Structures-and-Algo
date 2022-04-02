class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not
    Node* p=NULL;
    int final=1;
    void itree(Node* root){
        if(root== NULL){
            return;
        }
        itree(root->left);
        if(p!=NULL && p->data > root->data){
            final=0;
        }
        p=root;
        itree(root->right);
    }
    bool isBST(Node* root) 
    {
        // Your code here
        itree(root);
        return final;
    }
};
