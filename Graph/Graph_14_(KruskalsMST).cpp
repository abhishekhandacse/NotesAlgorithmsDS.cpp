#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> iPair;
class Graph{
	int V;int E;
	vector< pair<int, iPair> > edges;
public:
	Graph(int V,int E);
	void addEdge(int U,int V,int W);
	int kruskalsMST();
};
class DisjointSets{
	int *parent,*rnk;
	int n;
public:
	DisjointSets(int n);
	int find(int U);
	void merge(int x,int y);
};

Graph::Graph(int V,int E){
	this->V=V;
	this->E=E;
}
void Graph::addEdge(int U,int V,int W){
	 edges.push_back({W, {U, V}});
}
DisjointSets::DisjointSets(int n){
	this->n=n;
	parent=new int[n+1];
	rnk=new int[n+1];
	for(int i=0;i<=n;i++){
		rnk[i]=0;
		parent[i]=i;
	}
}
int DisjointSets::find(int U){
	if(U!=parent[U]){
		parent[U]=find(parent[U]);
	}
	return parent[U];
}
void DisjointSets::merge(int x,int y){
	x=find(x);y=find(y);
	if(rnk[x]>rnk[y])
		parent[y]=x;
	else
		parent[x]=y;
	if(rnk[x]==rnk[y])
		rnk[y]++;
}
int Graph::kruskalsMST(){
	int mst_wt=0;
	sort(edges.begin(),edges.end());
	// create disjoint sets
	DisjointSets ds(V);
	vector< pair<int, iPair> > ::iterator it;
	for(it=edges.begin();it!=edges.end();it++){
		int U=(it->second).first;
		int V=(it->second).second;

		int set_u=ds.find(U);
		int set_v=ds.find(V);
		// Check if selected edge is creating a cycle or not
		// Cycle created only is U & V belong to same set
		if(set_u !=set_v){
			cout<<U<<" -- "<<V<<endl;
			mst_wt+=it->first;
			// merge two sets
			ds.merge(set_u,set_v);
		}

	}
	return mst_wt;
}

int main()
{
    /* Let us create above shown weighted
       and unidrected graph */
    int V = 9, E = 14;
    Graph g(V, E);
 
    //  making above shown graph
    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);
 
    cout << "Edges of MST are \n";
    int mst_wt = g.kruskalsMST();
 
    cout << "\nWeight of MST is " << mst_wt;
 
    return 0;
}








