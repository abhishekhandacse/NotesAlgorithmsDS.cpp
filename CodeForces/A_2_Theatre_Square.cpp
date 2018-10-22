#include<iostream>
using namespace std;

int main(){


	int n,m,a;
	cin>>n>>m>>a;

	long long int ans=0;

	if((n%a)==0){
		ans=(n/a);
	}else{
		ans=((n/a)+1);
	}

	if((m%a)==0){
		ans*=(m/a);
	}else{
		ans*=((m/a)+1);
	}

	cout<<ans<<endl;



return 0;}