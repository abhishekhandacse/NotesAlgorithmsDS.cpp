#include <bits/stdc++.h>

using namespace std;


void print(int **arr,int row,int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
int MinTime(int **arr,int row,int col){
	queue<pair<int,int>> que;
	int ones=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(arr[i][j]==2)
				que.push(make_pair(i,j));
			if(arr[i][j]==1)
				ones++;
		}
	}
	int count=que.size();
	int ans=0;
	while(!que.empty()){
		pair<int,int> p=que.front();
		que.pop();
		int x=p.first;
		int y=p.second;
		// cout<<x<<" "<<y<<"<-O->"<<ones<<endl;
		
			

		if( (x>0) && arr[x-1][y]==1){
			arr[x-1][y]=2;
			que.push(make_pair(x-1,y));
			ones--;
			
		}
		if((x<(row-1) ) && arr[x+1][y]==1){
			arr[x+1][y]=2;
			que.push(make_pair(x+1,y));
			ones--;
			
		}
		if((y>0) && arr[x][y-1]==1){
			arr[x][y-1]=2;
			que.push(make_pair(x,y-1));
			ones--;
			
		}
		if(y<(col-1) && arr[x][y+1]==1){
			arr[x][y+1]=2;
			// cout<<"Hit";
			que.push(make_pair(x,y+1));
			ones--;
			
		}
			
		// cout<<endl;
		// cout<<ones;
		// cout<<endl;
		count--;
		if(ones==0){
			ans++;
			break;
		}

		if(count==0){
			count=que.size();
			ans++;
		}
	}

	if(ones)
		return -1;
	else return ans;

}

int main(){
	int tc;
	cin>>tc;

	while(tc--){
		int rows,cols;
		cin>>rows>>cols;
		int **arr= new int*[rows];
		for(int i=0;i<rows;i++){
			arr[i]=new int[cols];
		}
		
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				cin>>arr[i][j];
			}
		}

		cout<<MinTime(arr,rows,cols)<<endl;
		
	}


return 0;}