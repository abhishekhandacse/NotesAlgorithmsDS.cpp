#include<bits/stdc++.h>
#define SIZE 101
#define MOD 1000000007
using namespace std;

vector<int> fib(SIZE,0);

int fibonnci(int N){
	if(fib[N])//Hit
		return fib[N];
	else{//Miss
		for(int i=3;i<=N;i++){
			fib[i]=((fib[i-1]+fib[i-2])%MOD);
		}
	return fib[N];
	} 
}
int main(){
	fib[1]=2;
	fib[2]=3;
	int tc;
	cin>>tc;
	while(tc--){
		int N;
		cin>>N;
		cout<<fibonnci(N)<<endl;
	}


return 0;}