#include<bits/stdc++.h>
using namespace std;


bool Isvalid(int i,int j,int R,int C){
	if(i>=0 && j>=0 && i<R && j<C  )
		return true;
	return false;
}

void BFS(vector<vector<int>> &Mat,int i,int j,int R,int C){
	queue<pair<int,int>> q;
	q.push(make_pair(i,j) );
	while(!q.empty()){
		pair<int,int> p=q.front();
		q.pop();
		int x=p.first;
		int y=p.second;
		Mat[x][y]=2;
		// Check all 8 possible directions
		// 1
		i=x;
		j=y;
		if(Isvalid(i-1,j-1,R,C) && (Mat[i-1][j-1]==1) ){
			q.push(make_pair(i-1,j-1));
		}
		// 2
		if(Isvalid(i-1,j,R,C) && (Mat[i-1][j]==1) ){
			q.push(make_pair(i-1,j));
		}
		// 3
		if(Isvalid(i-1,j+1,R,C) && (Mat[i-1][j+1]==1) ){
			q.push(make_pair(i-1,j+1));
		}
		// 4
		if(Isvalid(i,j+1,R,C) && (Mat[i][j+1]==1) ){
			q.push(make_pair(i,j+1));
		}
		// 5
		if(Isvalid(i+1,j+1,R,C) && (Mat[i+1][j+1]==1) ){
			q.push(make_pair(i+1,j+1));
		}
		// 6
		if(Isvalid(i+1,j,R,C) && (Mat[i+1][j]==1) ){
			q.push(make_pair(i+1,j));
		}
		// 7
		if(Isvalid(i+1,j-1,R,C) && (Mat[i+1][j-1]==1) ){
			q.push(make_pair(i+1,j-1));
		}
		// 8
		if(Isvalid(i,j-1,R,C) && (Mat[i][j-1]==1) ){
			q.push(make_pair(i,j-1));
		}

	}
}

int Islands(vector<vector<int>> &Mat,int R,int C){
	int count=0;
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			if(Mat[i][j]==1){
				count++;
				BFS(Mat,i,j,R,C);
			}
		}
	}
	return count;
}




int main(){

	int tc;
	cin>>tc;
	while(tc--){
		int row,col;
		cin>>row>>col;
		vector<vector<int>> Mat(row,vector<int>(col));
		for(int i=0;i<row;i++)
			for(int j=0;j<col;j++)
				cin>>Mat[i][j];

		cout<<Islands(Mat,row,col)<<endl;
	}






return 0;}