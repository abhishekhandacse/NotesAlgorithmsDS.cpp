#include <bits/stdc++.h>

using namespace std;



int diffk(int *arr,int size,int k){
	
}

int main(){
	int tc;
	cin>>tc;


	while(tc--){
		int size,k,temp;
		cin>>size;
		map<int,int> mp;

		for(int i=0;i<size;i++){
			cin>>temp;
			if(mp.find(temp)==mp.end())
				mp.insert(make_pair(temp,1));
			else {
				int val=mp.find(temp)->second;
				if(val<2){
					val++;
					mp.erase(temp);
					mp.insert(make_pair(temp,val));
				}
			}
		}
			// for(auto it=mp.begin();it!=mp.end();it++)
			// 	cout<<it->first<<" "<<it->second<<endl;
		vector<int> arr;
		cin>>k;
		for(auto it=mp.begin();it!=mp.end();it++){
			for(int i=0;i< (it->second);i++)
				arr.push_back(it->first);
		}
		int ans=0;
		for(int i=0;i<arr.size()-1;i++){
			for(int j=i+1;j<arr.size();j++){
				if( (arr[j]-arr[i])==k)
					ans++;
			}
		}
		cout<<ans<<endl;

		
	}
return 0;}