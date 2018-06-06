/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* A binary tree node structure
struct Node {
    int data;
    Node* left, * right;
}; */
// This function should return tree if passed  tree 
// is balanced, else false.  Time complexity should
//  be O(n) where n is number of nodes in tree
int height(Node *root){
    if(root==NULL) return 0;
    int left=height(root->left);
    int right=height(root->right);
    if(left>right){
        return left  +1;
    }else{
        return right +1;
    }
}
bool isBalanced(Node *root){
    if(root==NULL)return true;
    return isBalanced(root->left) && isBalanced(root->right) && (abs( height(root->left)-height(root->right)) <=1 );
}
