// DP Solution
// Following Top Down Approach
// #include <iostream>

#include <bits/stdc++.h>
using namespace std;

int printarr(int *arr,int rows,int cols){
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<arr[j+i*cols]<<" ";
		}
	cout<<endl;
	}

}
int FibCoeff(int N,int K){
	int aux[N+1][K+1];
	// aux[0][0]=1;
	for(int n=0;n<=N;n++){
		for(int k=0;k<=K;k++){
			if(k>n){aux[n][k]=0;continue;}
			if(k==0){aux[n][k]=1;continue;}
			aux[n][k]=aux[n-1][k-1]+aux[n-1][k];
		}
	}
	printarr((int *)aux,N+1,K+1);
	return aux[N][K];
}
int main(){
	cout<<FibCoeff(3,2)<<endl;
return 0;}

// Geek for geeks selected solution
// Please go through once
#include <iostream>
typedef long long int lint;
using namespace std;

int Fib(int N,int K){
	lint aux[N+1][K+1];
	// aux[0][0]=1;
	for(int n=0;n<=N;n++){
		for(int k=0;k<=K;k++){
			if(k>n){aux[n][k]=0;continue;}
			if(k==0){aux[n][k]=1;continue;}
			aux[n][k]=(aux[n-1][k-1]+aux[n-1][k])%1000000007;//Overflow can occur while addition
		}
	}
// 	printarr((int *)aux,N+1,K+1);
	return aux[N][K];
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
	    int N,K;
	    cin>>N>>K;
	    cout<<Fib(N,K)<<endl;
	}
return 0;}