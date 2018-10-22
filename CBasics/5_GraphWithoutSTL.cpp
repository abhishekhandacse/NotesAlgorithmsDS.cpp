#include<iostream>

using namespace std;

struct Node{
	int data;
	Node *next;
};


class Graph{
	int V;
	Node  **head;
public:
	Graph(int V){
		this->V=V;
		head=new Node*[V];
		for(int i=0;i<V;i++)
			head[i]=NULL;
	}
	void AddEdge(int U,int V){
		// U-->V
		Node *temp=new Node();
		temp->data=V;
		temp->next=head[U];
		head[U]=temp;
		// V-->U
		temp=new Node();
		temp->data=U;
		temp->next=head[V];
		head[V]=temp;

	}

	void Print(){
		for(int i=0;i<V;i++){
			Node *ptr=head[i];
			cout<<i<<"-->";
			while(ptr!=NULL){
				cout<<ptr->data<<" ";
				ptr=ptr->next;
			}
			cout<<endl;
		}
	}
};


int main(){

	int V=4;
	Graph *g=new Graph(V);

	g->AddEdge(0,1);
	g->AddEdge(1,2);
	g->AddEdge(2,3);
	g->AddEdge(3,0);
	g->AddEdge(0,2);
	g->AddEdge(1,3);

	g->Print();
return 0;}