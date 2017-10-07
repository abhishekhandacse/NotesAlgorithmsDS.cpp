/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
/* Should return true if trees with roots as r1 and 
   r2 are identical */
bool isIdentical(Node *r1, Node *r2){
    if( (r1==NULL && r2!=NULL) || (r1!=NULL && r2==NULL) ) return false;
    if(r1==NULL && r2==NULL) return true;
    
    return isIdentical(r1->left,r2->left) && isIdentical(r1->right,r2->right) && ( (r1->data)==(r2->data));
}