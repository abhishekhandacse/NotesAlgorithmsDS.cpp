/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; */
// Should set the nextRight for all nodes

// First Right code for printing nodes of trees level by level using queue and then modify that to incorporate this....
void connect(Node *root){
   if(root==NULL) return;
   queue<Node*> q;
   q.push(root);
   int count;
   while(1){
       count=q.size();
       if(count==0) break;
       while(count){
           Node *top=q.front();
           q.pop();
           if(count==1)
                    top->nextRight=NULL;
            else
                    top->nextRight=q.front();
            count--;
            if(top->left!=NULL)
                q.push(top->left);
            if(top->right!=NULL)
                q.push(top->right);
       }
   }
}
