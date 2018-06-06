#include <bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N,K;
		cin>>N>>K;
		int count=0;
		for(int i=1;i<=(N-1);i++){
			for(int j=(i+1);j<=N;j++){
				if(( (i%K) ==(j%K)))
					count++;
			}
		}
		cout<<count<<endl;
	}
return 0;}