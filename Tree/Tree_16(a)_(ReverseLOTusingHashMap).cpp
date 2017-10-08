// THis is the least effiecient approach
// It requires time complexity O(N^3)
// And space coressponding to array to vectoris

/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* A tree Node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
int height(Node *root){
    if(root==NULL)return 0;
    int left=height(root->left);
    int right=height(root->right);
    if(left>right)return left+1;
    else return right +1;
}
void reversePrintAux(Node *root,int i,map<int,vector<int>> &hashmap,int &h){
    if(root==NULL) return;
    if(i==1){
        hashmap[h].push_back(root->data);
    }
    reversePrintAux(root->left,i-1,hashmap,h);
    reversePrintAux(root->right,i-1,hashmap,h);
}
void reversePrint(Node *root){
    map<int,vector<int>> hashmap;
    for(int i=1;i<=height(root);i++){
        reversePrintAux(root,i,hashmap,i);
    }
    //Now our map contains the LOT in seperate vectors
    // But we need to prevent that in reverse order
    // Notice How we can run the iterator
    // in reverse order
    map<int,vector<int>> ::reverse_iterator mpiter;
    vector<int> ::iterator veciter;
    for(mpiter=hashmap.rbegin();mpiter!=hashmap.rend();mpiter++){
        vector<int> temp=(mpiter->second);
        for(veciter=temp.begin();veciter!=temp.end();veciter++){
            cout<<*veciter<<" ";
        }
    }
}