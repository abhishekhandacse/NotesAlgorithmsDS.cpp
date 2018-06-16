// C++ program to print DFS traversal from
// a given vertex in a  given graph
#include<iostream>
#include<list>
using namespace std;
 
// Graph class represents a directed graph
// using adjacency list representation
class Graph
{
    int V;    // No. of vertices
 
    // Pointer to an array containing
    // adjacency lists
    list<int> *adj;
 
    // A recursive function used by DFS
    void DFSUtil(int v, bool visited[]);
public:
    Graph(int V);   // Constructor
 
    // function to add an edge to graph
    void addEdge(int v, int w);
 
    // DFS traversal of the vertices
    // reachable from v
    void DFS(int v);
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}
 
void Graph::DFSUtil(int v, bool visited[],int *arr,int N,int Max,int ans)
{
    // Mark the current node as visited and
    // print it
    visited[v] = true;
    cout << v << " ";
 
    // Recur for all the vertices adjacent
    // to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i){
        if (!visited[*i]){
        	if(arr[*i]){
        		Max--;
        	}
            DFSUtil(*i, visited,arr,N,Max,ans);
        }
    }
}
 
// DFS traversal of the vertices reachable from v.
// It uses recursive DFSUtil()
void Graph::DFS(int v,int *arr,int N,int Max,int &ans)
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
 
    // Call the recursive helper function
    // to print DFS traversal
    DFSUtil(v, visited,arr,N,Max,ans);
}
 
int main()
{
   
	int N,Max;
	cin>>N>>Max;
	int *arr=new int[N];
	
	for(int i=0;i<N;i++)
		cin>>arr[i];

	int src,dest;
	Graph g(N);
	for(int i=0;i<(N-1);i++){
		cin>>src>>dest;
		g.addEdge(src-1, dest-1);
	}
	int ans=0;
    g.DFS(0,arr,N,Max,ans);
 
    return 0;
}