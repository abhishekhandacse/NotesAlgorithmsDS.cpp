#include <bits/stdc++.h>

using namespace std;


void FirstNonRepeating(string str){
	map<char,int> mp;
	queue<char> q;
	
	map<char,int> ::iterator it;
	for(int i=0;i<str.length();i++){
		it=mp.find(str[i]);
		if(it==mp.end()){
			mp.insert(make_pair(str[i],1));
			q.push(str[i]);
			if(q.empty()){
				cout<<str[i]<<" ";
			}else
				cout<<q.front()<<" ";
		}else{
			int val=(it->second);
			val++;
			mp.erase(str[i]);
			mp.insert(make_pair(str[i],val));

			while( ( !q.empty() ) && ( (mp.find(q.front())->second) !=1 ) )
					q.pop();
		
			if(q.empty())
				cout<<-1<<" ";
			else
				cout<<q.front()<<" ";
		}
	}
	cout<<endl;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int n;
		char temp;
		cin>>n;
		string str;
		for(int i=0;i<n;i++){
			cin>>temp;
			str+=temp;
		}

		FirstNonRepeating(str);
	}

return 0;}