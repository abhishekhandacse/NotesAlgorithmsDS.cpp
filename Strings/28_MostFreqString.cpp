#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--){
	    int num;
	    cin>>num;
	    unordered_map<string,int> mp;
	    
	    string temp;
	    string ans="z";
	    int freq=INT_MIN;
	    while(num--){
	       cin>>temp;
	       auto it=mp.find(temp);
	       if(it==mp.end()){
	       	mp.insert(make_pair(temp,1));
	       	if(freq<1){
	       		freq=1;
	       		ans=temp;
	       	}else if(freq==1 && (ans.compare(temp)>0) ){
	       		freq=1;
	       		ans=temp;
	       	}
	       	
	       }else{
	       	int val=it->second;
	       	val++;
	       	if(freq<val){
	       		freq=val;
	       		ans=temp;
	       	}else if(freq==(val) && (ans.compare(temp)>0)){
	       		freq=val;
	       		ans=temp;
	       	}
	       
	       	mp.erase(temp);
	       	mp.insert(make_pair(temp,val));
	       }
	    }

	    cout<<ans<<endl;
	       
	       
	}
	return 0;
}