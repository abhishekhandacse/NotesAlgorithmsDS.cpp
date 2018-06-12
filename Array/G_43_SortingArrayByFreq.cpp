#include <bits/stdc++.h>
using namespace std;
/*
Hard level problem of gfg got Accepted
*/


int main(){

	int tc;
	cin>>tc;
	while(tc--){
		multimap<int,int> mm;
		int size,ele;
		cin>>size;
		for(int i=0;i<size;i++){
			cin>>ele;
			if(mm.find(ele)==mm.end()){
				mm.insert(make_pair(ele,1));
			}else{
				int val=mm.find(ele)->second;
				mm.erase(ele);
				val++;
				mm.insert(make_pair(ele,val));
			}
		}

		map<int,set<int>> mapans;
		for(auto it=mm.begin();it!=mm.end();it++){
			mapans[ it->second ].insert(it->first);
		}

		map<int,set<int>> ::reverse_iterator it;
		for(it=mapans.rbegin();it!=mapans.rend();it++){
			for(auto itset=(it->second).begin();itset!=(it->second).end();itset++){
				for(int i=(it->first)-1;i>=0;i--)
					cout<<*itset<<" ";
			}
		}
		cout<<endl;



	}



return 0;}
