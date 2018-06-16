#include <bits/stdc++.h>

using namespace std;

void leaders(int *arr,int size){
	vector<int> pr;
	pr.push_back(arr[size-1]);
	int max=arr[size-1];
	for(int i=size-2;i>=0;i--){
		if(max<arr[i]){
			max=arr[i];
			pr.push_back(max);
		}
	}
	for(int i=pr.size()-1;i>=0;i--)
		cout<<pr[i]<<" ";
	cout<<endl;
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

		leaders(arr,size);

		
	}
return 0;}