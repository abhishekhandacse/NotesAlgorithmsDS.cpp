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
// A wrapper over leftViewUtil()
// This function calculates only number of levels
// We need height of binary search tree so height = levels+1 (Normally)
// Tested in geeks for geeks

int height(Node *ptr){
    if(ptr==NULL)
        return 0;
    int left=height(ptr->left);
    int right=height(ptr->right);
    if(left>right){
        return left+1;
    }else{
        return right+1;
    }
}
void leftviewAux(Node *ptr,int i,int &flag){
    if(ptr==NULL || flag==1){return;}
    if(i==1){
        cout<<ptr->data<<" ";
        flag=1;
        return;
    }
    leftviewAux(ptr->left,i-1,flag);
    leftviewAux(ptr->right,i-1,flag);
}
void leftView(Node *root)
{   int flag=0;
    for(int i=1;i<=height(root)+1;i++){
        leftviewAux(root,i,flag);
        flag=0;
    }
}