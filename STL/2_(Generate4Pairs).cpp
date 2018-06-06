#include<bits/stdc++.h>

using namespace std;

int Pairs(int N){
	map<int,pair<int,int>> mp;
	map<int,pair<int,int>> ::iterator it;
	for(int i=1;i<=N;i++){
		for(int j=i;j<=N;j++){
			int result=(i*i)+(j*j);
			mp[result]=make_pair(i,j);
		}
	}
	// 
	int counter=0;
	for(it=mp.begin();it!=mp.end();it++){
		int first=(it->second).first;
		int second=(it->second).second;
		if(first==second){
			cout<<first<<" "<<first<<" "<<first<<" "<<first<<endl;
			counter++;
		}else{
			cout<<first<<" "<<second<<" "<<first<<" "<<second;
			cout<<first<<" "<<second<<" "<<second<<" "<<first;
			cout<<second<<" "<<first<<" "<<first<<" "<<second;
			cout<<second<<" "<<first<<" "<<second<<" "<<first<<endl;
			counter+=4;
		}
	}
	return counter;
}

int main(){
	int N=5;
	cout<<Pairs(N)<<endl;
return 0;}