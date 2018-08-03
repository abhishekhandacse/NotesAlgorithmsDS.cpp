#include<bits/stdc++.h>
using namespace std;

// Adjancency list representation of graph

class Graph{
	int V;
	vector<vector<int>> G;
	// Auxillary function for DFS
	void DFS_util(vector<bool> &visited,int S);
	// Aux funtion for Counting Paths
	void CountPathsUtil(int u, int d,vector<bool> &v,int &pathCount);
	void DFS_checkCycle_directed(int i,bool &ans,vector<bool> &visited);
public:
	Graph(int V);
	void addEdge(int u,int v);
	void BFS(int S);
	void DFS(int S);
	int FindMother();
	int CountPaths(int S,int D);
	bool IsCyclic_directed();
};
Graph::Graph(int V){
		this->V=V;
		G.resize(V);
}
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
// Count all possible paths from source to destination
/*
	The idea is to do DFS for the source and use backtracking to calculate the number of paths which lead to destination

*/
int Graph::CountPaths(int S,int D){
	vector<bool> visited(V,false);
	int pathcount=0;
	CountPathsUtil(S,D,visited,pathcount);
	return pathcount;
}
void Graph::CountPathsUtil(int S,int D,vector<bool> &visited,int &count){
	visited[S]=true;
	if(S==D)
		count++;
	else{
		for(auto i:G[S]){
			if(visited[i]==false)
				CountPathsUtil(i,D,visited,count);
		}
	}
// Make it false so as to check other paths
	visited[S]=false;
}

// Is Graph Cyclic
/*
	We can do DFS from every node and check weather some node is begin visited twice
	If this is the case return true as cycle exists otherwise no cycle exists in the graph
*/
bool Graph::IsCyclic_directed(){
	bool ans=false;
	vector<bool> visited(V,false);
	for(int i=0;i<V;i++){
		if(ans)return ans;
		DFS_checkCycle_directed(i,ans,visited);
		fill(visited.begin(),visited.end(),false);
	}
	return ans;
}
void Graph::DFS_checkCycle_directed(int i,bool &ans,vector<bool> &visited){
	if(ans)return;
	visited[i]=true;

	// Do DFS in Adjancecy list of S
	for(auto ii:G[i]){
		if(visited[ii]==false)
			DFS_checkCycle_directed(ii,ans,visited);
		else {ans=true;break;}
	}
}

int main(){

    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    // g.addEdge(3, 0);
    
 	cout<<g.IsCyclic_directed()<<endl;
    return 0;
 
    
}