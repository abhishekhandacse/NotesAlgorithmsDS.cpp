#include <iostream>
#include <list>
#include <stack>
using namespace std;

class Graph{
	int V;

	list<int> *adj;

	void topologicalSortUtil(int V,bool visited[],stack<int> &Stack);
public:
	Graph(int V);

	void addEdge(int U,int V);

	void topologicalSort();
};

Graph::Graph (int V){
	this->V=V;
	adj=new list<int>[V];
}
void Graph::addEdge(int U,int V){
	adj[U].push_back(V);
}
// Topological Sort begins
void Graph::topologicalSortUtil(int V,bool visited[],stack<int> &Stack){
	// Mark the current node as visited
	visited[V]=true;
	list<int>::iterator i;
	for(i=adj[V].begin();i!=adj[V].end();i++){
		if(!visited[*i])
			topologicalSortUtil(*i,visited,Stack);
	}
	// Push to stack if it has no outgoing edge and then backtrack
	Stack.push(V);
}

void Graph::topologicalSort(){
	stack<int> Stack;//This stack would be passed by reference
	bool *visited=new bool[V];
	for(int i=0;i<V;i++){
		visited[i]=false;
	}

// Call the Recurseve Auxillary function if the node is not visited at all
	for(int i=0;i<V;i++){
		if(visited[i]==false)
			topologicalSortUtil(i,visited,Stack);
	}
	while(Stack.empty()==false){
		cout<<Stack.top()<<" ";
		Stack.pop();
	}	

}
int main()
{
    // Create a graph given in the above diagram
    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
 
    cout << "Following is a Topological Sort of the given graph n";
    g.topologicalSort();
 
    return 0;
}
