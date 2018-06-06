#include <bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N;
		cin>>N;
		int *arr=new int[N];
		
		for(int i=0;i<N;i++)
			cin>>arr[i];
		
		set<int> digits;
		set<int>::iterator it;

		for(int i=0;i<N;i++){
			while(arr[i]>0){
				int mod=(arr[i]%10);
				arr[i]=(arr[i]/10);
				digits.insert(mod);
			}
		}

		for(it=digits.begin();it!=digits.end();it++){
			cout<<(*it)<<" ";
		}
		cout<<endl;
	}



return 0;}