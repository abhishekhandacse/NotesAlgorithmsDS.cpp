// This includes only snipperts and needs driver main to run these codes

# include<queue>
queue<Node*> q;

void LOT(Node *root){
	if(root==NULL){return;}
	q.push(root);
	while(!q.empty()){
		Node* temp=q.front();
		q.pop();
		cout<<temp->data<<" ";
		if((root->left)!=NULL){
			q.push(root->left);
		}
		if((root->right)!=NULL){
			q.push(root->right);
		}
	}
}