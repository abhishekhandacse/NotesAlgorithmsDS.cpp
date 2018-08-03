#include<iostream>

using namespace std;


bool checkmod(int *arr,int size,int m,int sum=0,int count=0){
	

	if(  (sum) && ((sum%m)==0) )
		return 1;
	if(size==count)return 0;
	return checkmod(arr,size,m,sum+arr[count],count+1) || checkmod(arr,size,m,sum,count+1);

}

int main(){

	int tc;
	cin>>tc;

	while(tc--){
		int size,m;
		cin>>size>>m;
		int *arr=new int[size];

		for(int i=0;i<size;i++)
			cin>>arr[i];

		
		cout<<checkmod(arr,size,m)<<endl;

	}




return 0;}