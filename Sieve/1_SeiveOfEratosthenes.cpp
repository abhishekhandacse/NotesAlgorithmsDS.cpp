#include<bits/stdc++.h>

using namespace std;

void SieveErasthosenes(int N){
	vector<bool> prime(N+1,true);

	for(int p=2;((p*p)<=N);p++){
		if(prime[p]==true){
			for(int i=(2*p);i<=N;i+=p){
				prime[i]=false;
			}
		}
	}

	for(int p=2;p<=N;p++)
		if(prime[p])
			cout<<p<<" ";
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N;
		cin>>N;

		SieveErasthosenes(N);
		cout<<endl;
	}



return 0;}