#include <bits/stdc++.h>

using namespace std;

void segregate(int *arr,int size){
	int zeros=0;
	for(int i=0;i<size;i++)
		if(arr[i]==0)
			zeros++;
	for(int i=0;i<size;i++){
		if(zeros){
			cout<<0<<" ";
			zeros--;
		}else{
			cout<<1<<" ";
		}
	}
	cout<<endl;

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
		segregate(arr,N);

	}


return 0;}