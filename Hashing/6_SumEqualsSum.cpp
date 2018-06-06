#include <bits/stdc++.h>

using namespace std;

int SumPresent(int *arr,int N){
	map<int,pair<int,int>> sum;
	map<int,pair<int,int>>::iterator it;

	for(int i=0;i<(N-1);i++){
		for(int j=i+1;j<N;j++){
			int summation=arr[i]+arr[j];
			it=sum.find(summation);
			if(it!=sum.end()){
				return 1;
			}
			pair<int,int> p ={arr[i],arr[j]};
			sum.insert(make_pair(summation,p));
		}
	}
	return 0;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N;
		cin>>N;
		int *arr=new int[N];
		
		for(int i=0;i<N;i++)
			cin>>arr[i];

		cout<<SumPresent(arr,N)<<endl;
	}



return 0;}