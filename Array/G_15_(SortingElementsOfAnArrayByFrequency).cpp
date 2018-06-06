#include <bits/stdc++.h>

using namespace std;


int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N,temp;
		cin>>N;
		map<int,int> mp;
		map<int,int>::iterator it;
		for(int i=0;i<N;i++){
			cin>>temp;
			it=mp.find(temp);
			if(it==mp.end()){
				mp.insert(make_pair(temp,1));
			}else{
				int freq=(it->second);
				freq++;
				mp.erase(it);
				mp.insert(make_pair(temp,freq));
			}
		}
		//Print mp1
		for(it=mp.begin();it!=mp.end();it++)
			cout<<it->first<<"->"<<it->second<<endl; 

		// map->multimap
		multimap<int,int> mp2;
		multimap<int,int>::reverse_iterator it2;
		for(it=mp.begin();it!=mp.end();it++){
			mp2.insert(make_pair( (it->second),(it->first) ) );
		}
		for(it2=mp2.rbegin();it2!=mp2.rend();it2++)
			cout<<it2->first<<"->"<<it2->second<<endl; 
		// Now printing the multimap in descending order
		for(it2=mp2.rbegin();it2!=mp2.rend();it2++){
			for(int i=0;i<(it2->first);i++)
				cout<<(it2->second)<<" ";
		}
		cout<<endl;
	}



return 0;}