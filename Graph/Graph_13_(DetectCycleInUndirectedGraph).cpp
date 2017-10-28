#include <iostream>
#include <list>
#include <climits>
using namespace std;

class Graph{
	int V;
	list<int> *adj;
	bool isCyclicUtil(int V,bool visited[],int parent);
public:
	Graph(int V);
	void addEdge(int U,int V);
	bool isCyclic();
};
Graph::Graph(int V){
	this->V=V;
	adj=new list<int>[V];
}
void Graph::addEdge(int U,int V){
	adj[U].push_back(V);
	adj[V].push_back(U);//This is because of undirected graph...
}
bool Graph::isCyclicUtil(int V,bool visited[],int parent){
	// Mark the current node as visited
	visited[V]=true;
	list<int>::iterator it;
	for(i=adj[V].begin();i!=adj[V].end();i++){
		if(!visited[*i]){
			if(isCyclicUtil(*i,visited,V))//If adjacent is not visited ,then recur for that adjacent
				return true;
		}else if( (*i)!=parent)//if adjacent is visited and not present as parent ,Then there is a cycle
			return true;

	}
	return false;
}
// Driver program to test above functions
int main(){
    Graph g1(5);
    g1.addEdge(1, 0);
    g1.addEdge(0, 2);
    g1.addEdge(2, 0);
    g1.addEdge(0, 3);
    g1.addEdge(3, 4);
    g1.isCyclic()? cout << "Graph contains cycle\n":
                   cout << "Graph doesn't contain cycle\n";
 
    Graph g2(3);
    g2.addEdge(0, 1);
    g2.addEdge(1, 2);
    g2.isCyclic()? cout << "Graph contains cycle\n":
                   cout << "Graph doesn't contain cycle\n";
 
    return 0;
}