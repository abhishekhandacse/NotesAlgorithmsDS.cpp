/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


//Structure of binary tree
/*struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};*/
// function should print the topView of the binary tree
#include <map>
void topViewAux(Node *root,map<int,int> &mp,int hd){
    if(root==NULL) return;
    topViewAux(root->left,mp,hd-1);
    topViewAux(root->right,mp,hd+1);
    
    mp.insert(pair<int,int>(hd,root->data));
}
void topView(struct Node *root){
    map<int,int> mp;
    topViewAux(root,mp,0);
    map<int,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->second<<" ";
    }
}