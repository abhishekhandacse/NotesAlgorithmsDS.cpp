#include<bits/stdc++.h>

using namespace std;
struct Node{
	int freq;
	char data;
	Node *left;
	Node *right;
};
Node* CNN(char data,int freq){
	Node *temp=new Node();
	temp->data=data;
	temp->freq=freq;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

void IOT(Node *root,string temp=""){
	if(root==NULL)
		return;
	
	if(root->left==NULL  &&  root->right==NULL){
		cout<<root->data<<":"<<temp<<endl;
		return;
	}
	
	IOT(root->left,temp+'0');
	IOT(root->right,temp+'1');
	
}
class comp
{
public:
    int operator() ( Node* p1, Node* p2)
    {
        return ((p1->freq) > (p2->freq)) ;
    }
};
void PrintHuffman(vector<pair<char,int>> &vect){
	
	priority_queue<Node*,vector<Node*>,comp> pq;


	// Push entire vector to priority queue
	for(auto i:vect){
		Node *n=CNN(i.first,i.second);
		pq.push(n);
	}

	// Main Algorithms begins--------->

	while( (pq.size()>1) ){
		Node *l=pq.top();
		pq.pop();
		Node *r=pq.top();
		pq.pop();

		Node *temp=CNN('$', ((l->freq) + (r->freq)) );
		temp->left=l;
		temp->right=r;
		pq.push(temp);
	}

	// Just do the IOT of the tree

	IOT(pq.top());
}

int main(){


	vector<pair<char,int>> vect;

	vect.push_back(make_pair('a',5));
	vect.push_back(make_pair('b',9));
	vect.push_back(make_pair('c',12));
	vect.push_back(make_pair('d',13));
	vect.push_back(make_pair('e',16));
	vect.push_back(make_pair('f',45));

	// for(auto i:vect){
	// 	cout<<i.first<<" "<<i.second<<endl;
	// }

	PrintHuffman(vect);
	
return 0;}