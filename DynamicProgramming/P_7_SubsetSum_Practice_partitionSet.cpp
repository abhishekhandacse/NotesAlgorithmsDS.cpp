#include<iostream>

using namespace std;


bool checkpartition(int *arr,int size,int sumall,int count=0){
	
	if(count==size && (sumall!=0) )return 0;

	if(sumall==0)return 1;
	

	return checkpartition(arr,size,sumall,count+1)||checkpartition(arr,size,sumall-arr[count],count+1);
}

int main(){

	int tc;
	cin>>tc;

	while(tc--){
		int size;
		cin>>size;
		int *arr=new int[size];

		for(int i=0;i<size;i++)
			cin>>arr[i];

		int sumall=0;
		for(int i=0;i<size;i++)
			sumall+=arr[i];
		
		if((sumall%2==0) && (checkpartition(arr,size,(sumall/2) ))   )
		    cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}




return 0;}