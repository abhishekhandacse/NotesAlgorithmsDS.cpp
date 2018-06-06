// This function finds predecessor and successor of key in BST

void findPreSucc(Node *root,Node *&pre,Node *&suc,int key){
	if(root==NULL)	return;
	if(key==root->key){
		if(root->left!=NULL){//Finding rightmost node in the left subtree
			Node *temp=root->left;//For predecessor
			while(temp->right)
				temp=temp->right;
			pre=temp;
		}
		if(root->right!=NULL){//Finding the leftmost node in the right subtree 
			Node *temp=root->right;//for successor
			while(temp->left!=NULL)
				temp=temp->left;
			suc=temp;
		}
		return;
	}
	// Now its similer to searching a key in BST
	if(key<root->key){//Recur to left subtree while setting 
		suc=root;		//While setting succ to current node
		findPreSucc(root->left,pre,suc,key);
	}else{				//Recur to right subtree while setting
		pre=root;		// while setting pree as current node
		findPreSucc(root->right,pre,suc,key);
	}

}

// If pre or succ is equal to null implies that predecessor or succes
// does not exist.....