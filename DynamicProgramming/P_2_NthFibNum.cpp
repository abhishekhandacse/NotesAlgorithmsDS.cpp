#include <bits/stdc++.h>

using namespace std;
#define MAX 1000000007
vector<int> fib;


int fibo(int N){
	if(N==0 || N==1)
		return N;
	else if(N>= (fib.size()) ){
		int ans=(fibo(N-1)+fibo(N-2) % MAX);
		fib.push_back(ans);
		return ans;
	}else return fib[N];
}

int main(){

	fib.push_back(0);
	fib.push_back(1);

	int tc;
	cin>>tc;
	while(tc--){
		int num;
		cin>>num;
		
		cout<<fibo(num)<<endl;
	}




return 0;}