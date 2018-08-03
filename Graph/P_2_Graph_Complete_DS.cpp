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
	int FindMother();
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
// Mother Vertex
/* Small Explanation
	In this code ,when we will reach Mother vertex
	after that we cannot visit any other node because by defination its the node from which
	we can reach every node,So automatically it would be last visited node of DFS
*/
int Graph::FindMother(){
	vector<bool> visited(V,false);
	int v=0;
	for(int i=0;i<V;i++){
		if(visited[i]==false){
			DFS_util(visited,i);
			v=i;
		}
	}

	fill(visited.begin(),visited.end(),false);
	DFS_util(visited,v);
	for(int i=0;i<V;i++)
		if(visited[i]==false)
			return -1;
	return v;
}
int main(){

    Graph g(7);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(4, 1);
    g.addEdge(6, 4);
    g.addEdge(5, 6);
    g.addEdge(5, 2);
    g.addEdge(6, 0);
 
    cout << "A mother vertex is " << g.FindMother();
 
    return 0;
}