/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */
// This is a classis problem for practicing recuresion
// Submitted successfullty in geeks for geeks

void printBoundaryLeft(Node *root){
    if(root==NULL)return;
    if(root->left!=NULL){
        cout<<root->data<<" ";
        printBoundaryLeft(root->left);
    }else if(root->right!=NULL){
        cout<<root->data<<" ";
        printBoundaryLeft(root->right);
    }
    // If both if and else didnt work implies its a leaf node and hence its a base condition automatically
}
void printBoundaryRight(Node *root){
    if(root==NULL)return;
    if(root->left!=NULL){
        printBoundaryRight(root->left);
        cout<<root->data<<" ";
    }else if(root->right!=NULL){
        printBoundaryRight(root->right);
        cout<<root->data<<" ";
    }
    // If both if and else did not work implies its a leaf node and hence base condition
}
void printLeaves(Node *root){
    if(root==NULL)return;
    printLeaves(root->left);
    // Print only iff it is a leaf node
        if(root->left==NULL && root->right == NULL){
            cout<<root->data<<" ";    
        }
    printLeaves(root->right);
}
void printBoundary(Node *root){
     if(root==NULL)return;
     cout<<root->data<<" ";
     printBoundaryLeft(root->left);//Will print in top down fashion
     printLeaves(root->left);//Will print all the leaves in the left subtree
     printLeaves(root->right);//Will print all the leaves in the right subtree
     printBoundaryRight(root->right);//Will print the right boundary in botton up fasion
}