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
// #include <queue>
// #include<bits/stdc++.h>
//Submitted successfully in geeks
void topView(struct Node *root){
    if(root==NULL)return;   
    queue<pair<Node*,int>> q;
    unordered_map<int,int> mp;
    q.push(make_pair(root, 0));
    while(!q.empty()){
        Node *temp=((q.front()).first);
        int val=((q.front()).second);
        q.pop();
        if(mp.find(val)==mp.end()){//required element not in the list
            mp.insert(pair<int,int>(val,temp->data));
            // mp[val]=temp->data;
            cout<<temp->data<<" ";
        }
        if(temp->left!=NULL){
            q.push(make_pair(temp->left,val-1));
        }
        if(temp->right!=NULL){
            q.push(make_pair(temp->right,val+1));
        }
    }
    // unordered_map<int,int>::iterator it;
    // for(it=mp.begin();it!=mp.end();it++){
    //     cout<<it->second<<" ";
    // }
    // This is giving incorrect answer
}