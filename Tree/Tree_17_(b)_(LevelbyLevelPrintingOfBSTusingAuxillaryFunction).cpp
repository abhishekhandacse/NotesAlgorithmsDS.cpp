// Not tested on geeksforgeeks....
int height(Node *root){
	if(root==NULL) return 0;
	int left=height(root->left);
	int right=height(root->right);
	if(left>right) return left +1;
	else return right +1;
}
void PrintTreeAux(Node *root,int i){
	if(root==NULL) return 0;
	if(i==1){
		cout<<root->data;
		return;
	}
	PrintTreeAux(root->left,i-1);
	PrintTreeAux(root->right,i-1);
}
void PrintTree(Node *root){
	int h=height(root);
	for(int i=1;i<=h;i++){
		PrintTreeAux(root,i);
		cout<<endl;
	}
}