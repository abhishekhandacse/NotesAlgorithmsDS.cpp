// Note tested on GFG practice beta


int height(Node *root){
	if(root==NULL) return 0;
	int left=height(root->left);
	int right=height(root->right);
	if(left>right)
		return left +1;
	else
		return right +1;
}

void PrintPathsOfTree(Node *root,int arr[],int pathlen){
	if(root==NULL) return;
	arr[pathlen]=root->data;

	if(root->left==NULL && root->right==NULL){
		// Print root to leaf paths of the tree
		for(int i=0;i<=pathlen;i++){
			cout<<arr[i]<<" ";
		}
	}
	PrintPathsOfTree(root->left,arr,pathlen++);
	PrintPathsOfTree(root->right,arr,pathlen++);
}

// Here we can do a optimisation 
// we can take an array of maximum length equal to the height of the tree in order to avoid vector...