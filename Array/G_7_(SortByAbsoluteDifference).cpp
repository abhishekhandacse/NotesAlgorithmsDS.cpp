#include <bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N,D;
		cin>>N>>D;
		multimap<int,int> mp;
		for(int i=0;i<N;i++){
			int key;
			cin>>key;
			int value=abs(key-D);
			mp.insert(make_pair(value,key));
		}
		// Just iterate through this multimap
		multimap<int,int> ::iterator it;

		for(it=mp.begin();it!=mp.end();it++){
			cout<<(it->second)<<" ";
		}
		cout<<endl;
	



	}


return 0;}