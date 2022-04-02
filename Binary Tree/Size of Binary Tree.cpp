int getSize(Node* node)
{
   
   int size=0;
   if(node==NULL){
       return 0;
   }
   size+=getSize(node->left);
   size+=getSize(node->right);
   size++;
   return size;
}
