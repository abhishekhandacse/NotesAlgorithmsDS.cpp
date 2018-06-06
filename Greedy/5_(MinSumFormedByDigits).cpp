#include <bits/stdc++.h>

using namespace std;


int MinSumFormed(int *arr,int size){
	sort(arr,arr+size);
	int num1=0,num2=0;
	for(int i=0;i<size;i++){
		if(i%2==0){
			num2=(num2*10) +arr[i];
		}else{
			num1=(num1*10)+arr[i];
		}
	}
	return num1+num2;
}
int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N;
		cin>>N;
		int *arr=new int[N];
		for(int i=0;i<N;i++){
			cin>>arr[i];
		}
		cout<<MinSumFormed(arr,N)<<endl;

	}


return 0;}