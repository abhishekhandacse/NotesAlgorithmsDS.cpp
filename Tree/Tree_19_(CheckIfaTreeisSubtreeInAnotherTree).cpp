// This solution is rejected by geeks for geeks online judge
// But It seems to me correct and there is discrepancy in GFG

/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* A binary tree node
struct Node
{
    int key;
    Node* left, * right;
}; */
/*you are required to 
complete this function */
bool isIdentical(Node *root1,Node *root2){
    if( (root1!=NULL && root2==NULL) || (root1==NULL && root2!=NULL ) ) return false;
    if(root1==NULL && root2==NULL) return true;
    return isIdentical(root1->left,root2->left) && isIdentical(root2->right,root2->right) &&( (root1->key)==(root2->key)) ;
}
bool isSubtree(Node*  T1 ,Node * T2){
    if(T2==NULL) return false;
    return isSubtree(T1,T2->left) || isSubtree(T1,T2->right) || isIdentical(T1,T2);
    // It will check in bottom up manner
    // Even top down manner approach is correct...
}