#include<bits/stdc++.h>

using namespace std;

int is_ss(string big,string small){
	int j=0;

	for(int i=0;i<big.length();i++){
		if(big[i]==small[j])
			j++;
		if(j==small.length())
			return 1;	
	}
	
	return 0;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int num;
		cin>>num;
		vector<string> vect;
		string temp;
		
		for(int i=0;i<num;i++){
			cin>>temp;
			vect.push_back(temp);
		}

		cin>>temp;
		int len=0;

		string ans;
		for(int i=0;i<vect.size();i++){
			if(is_ss(temp,vect[i])){
				if(len<(vect[i].length())){
					len=vect[i].length();
					ans=vect[i];
				}
			}
		}

		cout<<ans<<endl;

	}





return 0;}