#include<bits/stdc++.h>

using namespace std;

int prime[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89,
                        97, 101 };

typedef long long int lint;
lint Hash(string str){
	lint ans=1;
	for(int i=0;i<str.length();i++){
		int val=(int)(str[i])-97;
		ans*=prime[val];
	}
	return ans;
}
int main(){

	int tc;
	cin>>tc;
	while(tc--){
		unordered_map<lint,int> mp;
		int count;
		cin>>count;
		string temp;
		while(count--){
			cin>>temp;
			lint key=Hash(temp);
			if(mp.find(key)==mp.end()){
				mp.insert(make_pair(key,1));
			}else{
				int val=((mp.find(key))->second);
				val++;
				mp.erase(key);
				mp.insert(make_pair(key,val));
			}
		}

		// for(auto i=mp.begin();i!=mp.end();i++)
		// 	cout<<i->first<<" "<<i->second<<endl;
		vector<int> vect;
		for(auto i=mp.begin();i!=mp.end();i++)
			vect.push_back(i->second);
		sort(vect.begin(),vect.end());
		for(int i=0;i<vect.size();i++)
			cout<<vect[i]<<" ";
		cout<<endl;
	}





return 0;}