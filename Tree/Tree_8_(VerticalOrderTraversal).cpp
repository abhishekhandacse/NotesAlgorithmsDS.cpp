/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
/* Should print vertical order such that each vertical line
   is separated by $ */
// Submitted successfully in geeks for geeks in practice.beta
void verticalOrderAux(Node *root,map<int,vector<int>> &mp,int hd){
    if(root==NULL) return;
    
    mp[hd].push_back(root->data);
    
    verticalOrderAux(root->left,mp,hd-1);
    verticalOrderAux(root->right,mp,hd+1);
}
void verticalOrder(Node *root){
    map<int,vector<int>> mp;
    verticalOrderAux(root,mp,0);
    // Print the filled map
    map<int,vector<int>> ::iterator mpit;
    vector<int>::iterator vecit;
       for(mpit=mp.begin();mpit!=mp.end();mpit++){
           vector<int> temp=(mpit->second);
           for(vecit=(temp).begin();vecit!=(temp).end();vecit++){
               cout<<*vecit<<" ";
           }
          cout<<"$";
       }
}