#include <bits/stdc++.h>

using namespace std;

int LS(int *arr,int size){
	int counter=0,max=0;
	for(int i=0;i<size;i++){
		if(arr[i]==1){
			counter++;
			if(max<counter){
				max=counter;
			}else{
				counter=0;
			}
		}
	}
	return max;
}
int LSofOnce(int *arr,int size){
	int index=0,max=0;
	for(int i=0;i<size;i++){
		if(arr[i]==0){
			arr[i]=1;
			int counter=LS(arr,size);
			if(max<counter){
				max=counter;
				index=i;
			}
		}
	}
	return index;
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

	cout<<LSofOnce(arr,N)<<endl;
}


return 0;}