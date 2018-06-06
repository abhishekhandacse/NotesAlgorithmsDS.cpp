//Solution DP
// Time-:	O(N)
// Space-:	O(N) (Considering recursion stack)
#include <bits/stdc++.h>
typedef long long int lint;
using namespace std;

lint FibUtil(lint N,lint *arr);

lint Fib(lint N){
	lint *arr=new lint[N+1];
	for(lint i=0;i<(N+1);i++){
		arr[i]=0;
	}
	arr[0]=0;//Starting value for series
	arr[1]=1;//--
	return FibUtil(N,arr);
}
lint FibUtil(lint N,lint *arr){
	if(N==0 || N==1)
		return arr[N];

	if(!arr[N]){
		arr[N]= FibUtil(N-1,arr)+FibUtil(N-2,arr);//If value not set then set the value
		return arr[N];
	}else{
		return arr[N];//This is memorization actually i:e returning already learned value
	}
}
int main(){
lint N=7;
cout<<Fib(N)<<endl;
return 0;}

// Solution Iterative
// TIme Complexity-: O(N)
// Space Complexity-: O(1)

int fib(int N){
	if(N==0||N==1)
		return N;
	int num1=0,num2=1,result;
	for(int i=2;i<N;i++){
		result=num1+num2;
		num1=num2;
		num2=result;
	}
}