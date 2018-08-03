#include<iostream>

using namespace std;

void rodcutting(int *arr,int size,int &maxprofit,int len,int profit=0,int count=0){

	if(len<0)return;
	if(profit>maxprofit)
		maxprofit=profit;
	if(count==size)
		return;


	// inclusion
	rodcutting(arr,size,maxprofit,len-(count+1),profit+arr[count],count);
	// Exclusion
	rodcutting(arr,size,maxprofit,len,profit,count+1);
}

int main(){

	int tc;
	cin>>tc;
	while(tc--){
		int size;
		cin>>size;
		int arr[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];

		int maxprofit=0;

		rodcutting(arr,size,maxprofit,size);
		
		cout<<maxprofit<<endl;

	}




return 0;}