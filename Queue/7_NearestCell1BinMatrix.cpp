#include <bits/stdc++.h>

using namespace std;

void print(int **arr,int row,int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j]<<" ";
		}
		// cout<<endl;
	}
	cout<<endl;
}

void Nerest(int **arr,int row,int col){
	int **sol=new int*[row];
	for(int i=0;i<row;i++)
		sol[i]=new int[col];
	int visited[row][col];
	queue<pair<int,int>> que;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			visited[i][j]=0;
			sol[i][j]=INT_MAX;
			if(arr[i][j]){
				visited[i][j]=1;
				sol[i][j]=0;
				que.push(make_pair(i,j));
			}
		}
	}

	while(!que.empty()){
		pair<int,int> p=que.front();
		que.pop();
		int x=p.first;
		int y=p.second;

		if( (x>0) && (!visited[x-1][y]) ){
			sol[x-1][y]=min(sol[x-1][y],sol[x][y]+1);
			visited[x-1][y]=1;
			que.push(make_pair(x-1,y));
		}
		if( (x<(row-1)) && (!visited[x+1][y]) ){
			sol[x+1][y]=min(sol[x+1][y],sol[x][y]+1);
			visited[x-1][y]=1;
			que.push(make_pair(x+1,y));
		}
		if( (y>0) && (!visited[x][y-1])){
			sol[x][y-1]=min(sol[x][y-1],sol[x][y]+1);
			visited[x][y-1]=1;
			que.push(make_pair(x,y-1));
		}
		if( (y<(col-1)) && (!visited[x][y+1])){
			sol[x][y+1]=min(sol[x][y+1],sol[x][y]+1);
			visited[x][y+1]=1;
			que.push(make_pair(x,y+1));
		}
	}


	print(sol,row,col);




}
int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int row,col;
		cin>>row>>col;
		int **arr=new int*[row];
		
		for(int i=0;i<row;i++)
			arr[i]=new int[col];

		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				cin>>arr[i][j];
			}
		}

		Nerest(arr,row,col);

	}










return 0;}