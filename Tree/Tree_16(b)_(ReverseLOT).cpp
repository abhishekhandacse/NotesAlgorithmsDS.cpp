// This does not require any space complexity
// since it does not require hashmap of vectors

// TIme-: O(N^2) in case of skewed tree
// Space-: O(1)
// Better than previous apporach


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
        // hashmap[h].push_back(root->data);
    	cout<<root->data<<" ";
    }
    reversePrintAux(root->left,i-1,hashmap,h);
    reversePrintAux(root->right,i-1,hashmap,h);
}
void reversePrint(Node *root){
    map<int,vector<int>> hashmap;
    for(int i=height(root);i>=1;i--){
        reversePrintAux(root,i,hashmap,i);
    }
    //Now our map contains the LOT in seperate vectors
    // But we need to prevent that in reverse order
    // map<int,vector<int>> ::reverse_iterator mpiter;
    // vector<int> ::iterator veciter;
    // for(mpiter=hashmap.rbegin();mpiter!=hashmap.rend();mpiter++){
    //     vector<int> temp=(mpiter->second);
    //     for(veciter=temp.begin();veciter!=temp.end();veciter++){
    //         cout<<*veciter<<" ";
    //     }
    // }
}