
// This code is not available in GFG for practice purpose
// I have made all possible TC and corner conditions to check this code


void childSumProperty(Node *root){
	if(root==NULL){return true;}
	bool variable=(childSumProperty(root->left)&&childSumProperty(root->right));
	bool temp=true;
	if((root->left!=NULL)&&(root->right!=NULL)&&( (root->data)!=( (root->left->data) + (root->right->data)))){
		temp=false;
	}else if( (root->left!=NULL) && (root->right==NULL) && ( (root->data) == (root->left->data) ) ){
		temp=false;
	}else if((root->left==NULL) && (root->right!=NULL) && ( (root->data) == (root->right->data) )){
		temp=false;
	}
	return variable && temp;
}

