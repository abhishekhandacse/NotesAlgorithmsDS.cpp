#include <bits/stdc++.h>

using namespace std;


int distintele(int **arr,int size){
	unordered_set<int> st;
	for(int i=0;i<size;i++)
		st.insert(arr[0][i]);
	for(int i=1;i<size;i++){
		unordered_set<int> temp;
		for(int j=0;j<size;j++){
			temp.insert(arr[i][j]);
		}
		for(auto it=st.begin();it!=st.end();){
			if(st.size() && temp.find(*it)==temp.end()){
				it=st.erase(it);
			}else 
			it++;
		}
		if(st.size()==0)
			break;
	}
	return st.size();
}

int main(){

int tc;
cin>>tc;
while(tc--){
	int size;
	cin>>size;
	int **arr=new int*[size];
	for(int i=0;i<size;i++)
		arr[i]=new int[size];

	for(int i=0;i<size;i++)
		for(int j=0;j<size;j++)
			cin>>arr[i][j];

	cout<<distintele(arr,size)<<endl;
}




return 0;}