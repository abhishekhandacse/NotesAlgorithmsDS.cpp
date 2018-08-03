#include<bits/stdc++.h>
using namespace std;




class Graph{
	int V;
	vector<vector<int>> G;
	// Auxillary function for DFS
	void DFS_util(vector<bool> &visited,int S);
public:
	Graph(int V){
		this->V=V;
		G.resize(V);
	}
	void addEdge(int u,int v);
	void BFS(int S);
	void DFS(int S);
	
};
void Graph::addEdge(int u,int v){
	G[u].push_back(v);
}
// Functions for doing DFS

void Graph::DFS_util(vector<bool> &visited,int S){
	visited[S]=true;
	cout<<S<<" ";
	for(auto i:G[S]){
		if(visited[i]==false)
			DFS_util(visited,i);
	}
}
void Graph::DFS(int S){
	vector<bool> visited(V,false);

	DFS_util(visited,S);
	cout<<endl;
}
// Function for doing BFS

void Graph::BFS(int S){
	vector<bool> visited(V,false);
	list<int> Q;
	visited[S]=true;
	Q.push_back(S);

	while(!Q.empty()){
		S=Q.front();
		cout<<S<<" ";
		Q.pop_front();


		for(auto i:G[S]){
			if(visited[(i)]==false){
				visited[(i)]=true;
				Q.push_back((i));
			}
		}

			
		
	}
	cout<<endl;
}
int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    // g.BFS(2);
 	g.DFS(2);
    return 0;
}