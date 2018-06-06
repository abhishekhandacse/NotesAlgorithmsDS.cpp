#include <bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N,count=0,flag=0;
		cin>>N;
		int *arr=new int[N];
		for(int i=0;i<N;i++)
			cin>>arr[i];
		int i;
		for( i=0;i<(N-1);i++){
			if(arr[i]==arr[i+1])
				count++;
			else{
				if(count==0){
					// cout<<arr[i]<<endl;
					flag=1;
					break;
				}
				count=0;
			}
		}
		if( (flag==1)||(count==0) )
			cout<<arr[i]<<endl;
	}
return 0;}