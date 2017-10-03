/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node {
    int data;
    Node* left, * right;
}; */
/* Should return true if tree represented by root is BST. 
   For example, return  value should be 1 for following tree.
         20
     /      \ 
   10       30
  and return value should be 0 for following tree.
         10
     /      \ 
   20       30 */
// Tested by geeks for geeks judge
void checkBST(Node *root,int &flag,int lb,int ub){
    if(root==NULL || flag==1){return;}
    if( (root->data > ub) || (lb > root->data) ){
        flag=1;return;
    }
    checkBST(root->left,flag,lb,root->data);
    checkBST(root->right,flag,root->data,ub);
}
bool isBST(Node* root) {
    int flag=0;
    checkBST(root,flag,INT_MIN,INT_MAX);
    if(!flag) return true;
    else return false;
}
