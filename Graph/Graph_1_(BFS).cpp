#include <iostream>
#include <list>
using namespace std;

class Graph{
	int V;
	list<int> *adj;//Will Store the base address of each
public:
	Graph(int V);//will create a list corresponding to each Vertice
	void addEdge(int U,int V);
	void BFS(int S);
};

Graph::Graph(int V){
	(this->V)=V;
	adj=new list<int>[V];
}
void Graph::addEdge(int U,int V){
	adj[U].push_back(V);
}
//Here S is the starting node of the graph
void Graph::BFS(int S){
	bool *visited=new bool[V];
	for(int i=0;i<V;i++)
		visited[i]=false;//Making all the entries of the nodes as false
	
	list<int> Queue;
	Queue.push_back(S);
	list<int>::iterator i;

	while(!(Queue.empty())){
		S=Queue.front();
		cout<<S<<" ";
		Queue.pop_front();
		//Now check the adjustancy list corresponding to this S
		for(i=adj[S].begin();i!=adj[S].end();++i){
			if( !(visited[*i]) ){//If this node is not already visited
				// Make this node visited and add the contents if this adjancy list to Q if it is not visited
				visited[*i]=true;//Mark the current node as visited
				Queue.push_back(*i);

			}
		}
	}

}
int main(){
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(2,0);
	g.addEdge(2,3);
	g.addEdge(3,3);
	g.BFS(2);
return 0;}