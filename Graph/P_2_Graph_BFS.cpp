#include<bits/stdc++.h>
using namespace std;




class Graph{
	int V;
	vector<vector<int>> G;

public:
	Graph(int V){
		this->V=V;
		// G(V);
		G.resize(20);
	}
	void addEdge(int u,int v){
		G[u].push_back(v);
		// G[v].push_back(u);
	}
	void BFS(int S);
};
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
    g.BFS(2);
 
    return 0;
}