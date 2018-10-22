#include <bits/stdc++.h>
using namespace std;

int process(vector<string> &arr,int r,int c,int i,int j,int &count){
	count++;
	queue<pair<int,int>> q;
	q.push(make_pair(i,j));
	while(!q.empty()){
		pair<int ,int> p=q.front();
		q.pop();
		int x=(p.first);
		int y=(p.second);

		if(arr[x][y]=='X')
			arr[x][y]='O';

		if( (y>0) && arr[x][y-1]=='X'){
			q.push(make_pair(x,y-1));
		}
		if(y<(c-1) && arr[x][y+1]=='X'){
			q.push(make_pair(x,y+1));
		}
		if( x<(r-1) && arr[x+1][y]=='X'){
			q.push(make_pair(x+1,y));
		}
		if( x>(0) && arr[x-1][y]=='X'){
			q.push(make_pair(x-1,y));
		}
		// cout<<"Hello"<<endl;
	}
	return count;
}

int Xs(vector<string> &arr,int r,int c){

	int count=0;

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(arr[i][j]=='X'){
				process(arr,r,c,i,j,count);
			}
			// cout<<arr[i][j]<<" ";
		}
		// cout<<endl;

	}
	return count;

}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int r,c;
		cin>>r>>c;
		vector<string> vect;
		string temp;
		for(int i=0;i<r;i++){
			cin>>temp;
			vect.push_back(temp);
		}
		cout<<Xs(vect,r,c)<<endl;
	}
return 0;}