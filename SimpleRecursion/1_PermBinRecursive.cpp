#include <iostream>
using namespace std;

void permBin(int arr[],int len,int i){
	if(i==len){
		for(int k=0;k<len;k++)
			cout<<arr[k];
		cout<<endl;
		return;
	}
	arr[i]=0;
	permBin(arr,len,i+1);
	arr[i]=1;
	permBin(arr,len,i+1);
}

int main(){
	int arr[]={0,0,0,0};
	permBin(arr,(sizeof(arr)/sizeof(int)),0);
return 0;}