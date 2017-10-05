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
// This code has been successfully submitted by me on geeksforgeeks
void diagnolPrintAux(Node *root,map<int,vector<int>> &mp,int hd){
    if(root==NULL) return;
    
    mp[hd].push_back(root->data);//Weather a key is present or not present is simply covered by this condition
    diagnolPrintAux(root->left,mp,hd+1);
    diagnolPrintAux(root->right,mp,hd);
}
void diagonalPrint(Node *root){
   map<int,vector<int>> mp;
   diagnolPrintAux(root,mp,0);
// Print the corresponding map
   map<int,vector<int>> ::iterator mpit;
   vector<int>::iterator vecit;
   for(mpit=mp.begin();mpit!=mp.end();mpit++){
       for(vecit=(mpit->second).begin();vecit!=(mpit->second).end();vecit++){
           cout<<*vecit<<" ";
       }
    //   cout<<endl;
   }
}