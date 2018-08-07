#include<bits/stdc++.h>

using namespace std;

bool DFS(vector<vector<int>> &g,vector<bool> &visited,int i,int size,int count=0){
	// if(count>size)
	// 	return false;
	if(count==size)
		return true;
	for(auto j:g[i]){
		if(visited[j]==false){
			visited[j]=true;
			if(DFS(g,visited,j,size,count+1))
				return true;
			visited[j]=false;
		}
			
	}
	return false;
}


bool IsHamilTonian(vector<vector<int>> &g){
	int size=g.size();
	vector<bool> visited(size,false);

	for(int i=0;i<size;i++){
		visited[i]=true;
		if(DFS(g,visited,i,size-1))
			return true;
		fill(visited.begin(),visited.end(),false);
	}
	return false;
}


int main(){


	int tc;
	cin>>tc;
	while(tc--){
		int V,E;
		cin>>V>>E;
		vector<vector<int>> g(V);
		for(int i=0;i<E;i++){
			int u,v;
			cin>>u>>v;
			g[u-1].push_back(v-1);
			g[v-1].push_back(u-1);
		}

		cout<<IsHamilTonian(g)<<endl;
	}






return 0;}