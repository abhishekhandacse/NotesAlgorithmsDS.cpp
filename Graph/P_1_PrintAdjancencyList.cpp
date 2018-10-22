#include<bits/stdc++.h>

using namespace std;

int main(){

	int tc;
	cin>>tc;
	while(tc--){
		int V,E;
		cin>>V>>E;

		// This is undirected graph
		vector<vector<int>> graph(V);
		// Input all edges

		for(int i=0;i<E;i++){
			int U,V;
			cin>>U>>V;
			graph[U].push_back(V);
			graph[V].push_back(U);
		}

		// Print adjacency list
		if(E){
			int v=0;
			for(auto i=graph.begin();i!=graph.end();i++,v++){
				cout<<v<<"-> ";
				for(auto j=(*i).begin();j!=(*i).end();j++){
					cout<<(*j);
					if(j!=((*i).end()-1) )
						cout<<"-> ";

				}
				cout<<endl;
			}
		}else cout<<
	}




return 0;}