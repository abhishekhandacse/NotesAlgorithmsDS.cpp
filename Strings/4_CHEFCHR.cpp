#include <bits/stdc++.h>
using namespace std;

int combinations(string str){
	int len=str.length();
	if(len<4)
		return 0;
	set<char> st;
	set<char>::iterator it;
	int counter=0;
	for(int i=0;i<len;i++){
		if(str[i]=='c' || str[i]=='h' || str[i]=='e' || str[i]=='f'){
			if(i>3 && (st.size()==4) ){
				st.erase(str[i-4]);
			}
			st.insert(str[i]);
			string temp;
			for(it=st.begin();it!=st.end();it++){
				temp+=(*it);
			}
			if(temp.compare("cefh")==0)
				counter++;
		}else{
			st.erase(st.begin(),st.end());
		}
	}

	return counter;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string str;
		cin>>str;
		int val=combinations(str);
		if(val){
			cout<<"lovely "<<val<<endl;
		}else{
			cout<<"normal"<<endl;
		}
	}


return 0;}