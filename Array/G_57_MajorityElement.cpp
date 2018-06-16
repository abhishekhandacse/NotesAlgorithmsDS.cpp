#include <bits/stdc++.h>

using namespace std;

int MajorityEle(int *arr,int n){
	sort(arr,arr+n);
	int count=1;
	int maxcount=0;
	int ele;
	for(int i=1;i<n;i++){
		if(arr[i]==arr[i-1]){
			count++;
			if(maxcount<count){
				maxcount=count;
				ele=arr[i-1];
			}
		}else{
			
			count=1;
		}
	}
	if(maxcount>(n/2))
		return 	ele;
	else return -1;
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

		int ans=MajorityEle(arr,size);
		if(ans==-1)
			cout<<"NO Majority Element"<<endl;
		else cout<<ans<<endl;

		
	}
return 0;}