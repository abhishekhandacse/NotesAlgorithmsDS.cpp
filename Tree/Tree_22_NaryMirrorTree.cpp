#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
	adj[u].push_back(v);
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int V,E;
		cin>>V>>E;
		// First Directed Graph
		vector<int> G1[V];
		for(int i=0;i<E;i++){
			int u,v;
			cin>>u>>v;
			addEdge(G1,u,v);
		}
		// Second Directed Graph
		vector<int> G2[V];
		for(int i=0;i<E;i++){
			int u,v;
			cin>>u>>v;
			addEdge(G2,u,v);
		}
		// Reversing Adjacancy list of G2
		for(int i=0;i<V;i++)
			reverse(G2[i].begin(),G2[i].end());
		
		// Comparing Adjacancy list of G1 and G2
		int flag=0;
		
		for(int i=0;i<V;i++){
			if(G1[i]!=G2[i]){
				flag=1;
				break;
			}
		}
		if(flag)
			cout<<0<<endl;
		else
			cout<<1<<endl;
	}



return 0;}