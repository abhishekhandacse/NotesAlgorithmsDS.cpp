#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &col){
	for(auto i:col)
		cout<<i<<" ";

	cout<<endl;
}
bool IsSafe(vector<vector<int>> &Mat,int N,int R,int C){
	if(R==0)return true;
// // 	Same Row
// 	for(int j=0;j<C;j++)
// 		if(Mat[R][j])
// 			return false;
//  Same Col
	for(int i=R-1;i>=0;i--)
		if(Mat[i][C])
			return false;

//  Left Upper Diagnol
	for(int i=R-1,j=C-1;i>=0 && j>=0;i--,j--)
		if(Mat[i][j])
			return false;

//  Right Upper Diagnol
	for(int i=R-1,j=C+1;i>=0 && j<N;i--,j++)
		if(Mat[i][j])
			return false;

// Successfully Placed
return true;
}

void DFS(vector<vector<int>> &Mat,int &count,int N,vector<int> cols,vector<vector<int>> &sol,int R=0,int C=0){
	if(R==N){
		// Mission Successful
		count++;
		// print(cols);
		sol.push_back(cols);
		return;
	}
	for(int j=0;j<N;j++){
		if(IsSafe(Mat,N,R,j)){
			Mat[R][j]=1;//Queen Placed
			cols[j]=R+1;
			DFS(Mat,count,N,cols,sol,R+1,C);
			Mat[R][j]=0;//Queen UnPlaced or Backtracking
			cols[j]=0;
		}
	}
}

void PrintAllSoln(int N){
	vector<vector<int>> Mat(N,vector<int>(N,0));
	vector<int> cols(N,0);
	int count=0;
	vector<vector<int>> sol;
	DFS(Mat,count,N,cols,sol);
	// cout<<count<<endl;
	sort(sol.begin(),sol.end());
	for(auto i:sol){
		cout<<"[";
		for(auto j:i)
			cout<<j<<" ";
		cout<<"]";
	}
	cout<<endl;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N;
		cin>>N;

		PrintAllSoln(N);
		// cout<<endl<<endl;
	}	
return 0;}