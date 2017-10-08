// Tried and tested by geeks for geeks practice beta....
// This is the better approach with complexity O(N) using Level Order traversal


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
//You are required to complete this method
void levelOrder(Node* node){
  if(node==NULL) return;
  queue<Node*> q;
  q.push(node);
  int count;
  while(1){
      count=q.size();
      if(count==0) break;//Terminating condition for the infinite loop
      while(count){//This while loop will run that much number of times as there are nodes in level
              Node *top=q.front();
              q.pop();
              count--;
              cout<<top->data<<" ";
              if(top->left!=NULL) q.push(top->left);
              if(top->right!=NULL)q.push(top->right);
      }
      cout<<"$ ";
  }
}
