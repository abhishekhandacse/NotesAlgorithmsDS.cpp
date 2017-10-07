
// Not tested on geeks for geeks 
// Inital code after dry run

// Verified by geeks for geeks beta...
Node* LCA(Node* root,int n1,int n2){
	if(root==NULL)return NULL;
	Node *temp1=LCA(root->left,n1,n2);
	Node *temp2=LCA(root->right,n1,n2);
	if(temp1!=NULL && temp2!=NULL)
		return root;
	if(temp1!=NULL){
		if( (root->data==n1)  ||  (root->data==n2) )
			return root;
		else
			return temp1;
	}
	if(temp2!=NULL){
		if( (root->data==n1)  ||  (root->data==n2) )
			return root;
		else
			return temp2;	
	}

	if(root->data==n1 || root->data==n2)
		return root;
	if(temp1==NULL && temp2==NULL){
		return NULL;
	}
}