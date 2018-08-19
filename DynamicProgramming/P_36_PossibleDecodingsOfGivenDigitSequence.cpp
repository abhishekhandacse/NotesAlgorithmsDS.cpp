#include<bits/stdc++.h>

using namespace std;

void pd_aux(int *arr,int size,int &count,int num,int &flag,int mul=10){
	// if(num==0 || flag){
	// 	// flag=1;
	// 	return;
	// }

	if(num>26)return ;
	if(size==0){
		count+=1;
		cout<<num<<endl;
		return;
	}
	
	//Do not break
	pd_aux(arr,size-1,count,arr[size-1]*mul+num,flag,(mul*10) );

	//Break
	// if(arr[size])
		pd_aux(arr,size-1,count,arr[size-1],flag);
}
int PossibleDecodings(int *arr,int size){
	int count=0;
	int flag=0;
	// for(int i=0;i<size;i++)
	// 	cout<<arr[i]<<" ";
	pd_aux(arr,size-1,count,arr[size-1],flag);
	return count;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int size;
		cin>>size;
		
		string str;
		cin>>str;
		int arr[str.size()];
		for(int i=0;i<size;i++){
			arr[i]=(int)(str[i]-'0');
		}
	
		cout<<PossibleDecodings(arr,size)<<endl;
	}
	// int digits[]={2,5,6,3};
	// int size=sizeof(digits)/sizeof(int);
	


return 0;}