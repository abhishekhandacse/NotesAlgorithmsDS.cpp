#include <bits/stdc++.h>
using namespace std;


int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int size,size2;
		cin>>size>>size2;
		map<int,int> mp;
		int temp;
		for(int i=0;i<size;i++){
			cin>>temp;
			if(mp.find(temp)==mp.end()){
				mp.insert(make_pair(temp,1));
			}else{
				int val=mp.find(temp)->second;
				val++;
				mp.erase(temp);
				mp.insert(make_pair(temp,val));
			}
		}

		for(int i=0;i<size2;i++){
			cin>>temp;
			int freq=mp.find(temp)->second;
			mp.erase(temp);
			for(int j=0;j<freq;j++)
				cout<<temp<<" ";
		}

		for(auto it=mp.begin();it!=mp.end();it++){
			for(int j=0;j<(it->second);j++)
				cout<<(it->first)<<" ";
		}
		cout<<endl;




	}


return 0;}

