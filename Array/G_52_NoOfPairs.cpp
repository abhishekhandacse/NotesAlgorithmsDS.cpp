#include <bits/stdc++.h>

using namespace std;

void NumberOfPairs(int *arr,int size){
	set<int> st;

	for(int i=0;i<size;i++){
		while(arr[i]){
			st.insert(arr[i]%10);
			arr[i]=arr[i]/10;
		}
	}
	for(auto it=st.begin();it!=st.end();it++)
		cout<<*it<<" ";
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

		MakeAdistinctDigitArray(arr,size);

		
	}
return 0;}