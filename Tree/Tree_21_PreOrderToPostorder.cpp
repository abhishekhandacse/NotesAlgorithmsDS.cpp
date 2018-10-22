#include <bits/stdc++.h>
using namespace std;
 
// A utility function to search x in arr[] of size n
int search(int arr[], int x, int n)
{
    for (int i = 0; i < n; i++)
      if (arr[i] == x)
         return i;
    return -1;
}
 
// Prints postorder traversal from given inorder and preorder traversals
void printPostOrder(int in[], int pre[], int n, int &flag)
{  if(flag==1)
      return;
   // The first element in pre[] is always root, search it
   // in in[] to find left and right subtrees
   int root = search(in, pre[0], n);
   if(root==-1){
      flag=1;
      return;
   }

   // cout<<root<<endl;
   // If left subtree is not empty, print left subtree
   if (root != 0)
      printPostOrder(in, pre+1, root,flag);
   if(flag==1)
      return;
   // If right subtree is not empty, print right subtree
   if (root != n-1)
      printPostOrder(in+root+1, pre+root+1, n-root-1,flag);
   
   // Print root
   if(!flag)
      cout << pre[0] << " ";
}
 
// Driver program to test above functions
int main() {
    int tc;
    cin>>tc;
    while(tc--){
        int size;
        cin>>size;
        int *pre=new int[size];
        int *iot=new int[size];
        for(int i=0;i<size;i++){
            cin>>pre[i];
            iot[i]=pre[i];
        }
        int flag=0;
        sort(iot,iot+size);
        printPostOrder(iot,pre,size,flag);
        if(flag)
            cout<<"NO";
        cout<<endl;
    
    }
return 0;}