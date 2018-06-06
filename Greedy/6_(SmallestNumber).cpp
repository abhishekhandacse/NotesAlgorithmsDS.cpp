#include <bits/stdc++.h>

using namespace std;

int SmallestNumber(int sum,int digits){
	if(sum > (9*digits)){return -1;}

	int *arr=(int *)calloc(digits,sizeof(int));
	arr[0]=1;
	sum-=1;
	for(int i=digits-1;i>=0;i--){
		if(sum>9){
			arr[i]=9;
			sum-=9;
		}else{
			arr[i]=arr[i]+sum;
			break;
		}
	}
	int num=0;
	for(int i=0;i<digits;i++){
		num=(num*10) +arr[i]; 
	}
	return num;	
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int sum,digits;
		cin>>sum>>digits;
		cout<<SmallestNumber(sum,digits)<<endl;	
	}
	

return 0;}