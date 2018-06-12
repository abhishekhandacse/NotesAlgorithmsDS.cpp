#include <bits/stdc++.h>

using namespace std;

void SortbyabsDiff(int *arr1,int size,int x){
	multimap<int,int> mp;
	for(int i=0;i<size;i++)
		mp.insert(make_pair(abs(x-arr1[i]),arr1[i]));

	for(auto it=mp.begin();it!=mp.end();it++)
		cout<<it->second<<" ";
	cout<<endl;
}

int main(){
	int tc;
	cin>>tc;


	while(tc--){
		int size,x;
		cin>>size>>x;
		int *arr1=new int[size];
		
		for(int i=0;i<size;i++)
			cin>>arr1[i];
		

		SortbyabsDiff(arr1,size,x);

		
	}
return 0;}