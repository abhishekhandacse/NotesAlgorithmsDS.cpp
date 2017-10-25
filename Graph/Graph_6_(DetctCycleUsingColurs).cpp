#include <bits/stdc++.h>
using namespace std;

enum Color{WHITE,GRAY,BLACK};
class Graph{
	int V;
	list<int> *adj;

	bool DFSUtil(int V,int color[]);
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
}
bool Graph::DFSUtil(int U,int color[]){
	color[u]=GRAY;//Mark the current Vertex as being processed
	list<int>::iterator i;
	for(i=adj[u].begin();i!=adj[u].end();++i){
		int V=*i;//Node adjacent of u
		if(color[V]==GRAY)
			return true;//

		if(color[V]==WHITE && DFSUtil(V,color))
			return true;
	}
	color[u]=BLACK;
	return false;
}
bool Graph::isCyclic(){
	
}
