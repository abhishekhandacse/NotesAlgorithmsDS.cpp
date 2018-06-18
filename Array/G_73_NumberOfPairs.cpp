#include <bits/stdc++.h>

using namespace std;



int noOfpairs(int *arr1,int *arr2,int x,int y){
	int count=0;

	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(pow(arr1[i],arr2[j])>pow(arr2[j],arr1[i]))
				count++;
		}
	}
	return count;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int x,y;
		cin>>x>>y;
		int *arr1=new int[x];
		int *arr2=new int[y];
		for(int i=0;i<x;i++)
			cin>>arr1[i];
		for(int i=0;i<y;i++)
			cin>>arr2[i];

		cout<<noOfpairs(arr1,arr2,x,y)<<endl;
	}





return 0;}