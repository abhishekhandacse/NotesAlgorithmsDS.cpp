#include<bits/stdc++.h>

using namespace std;
typedef long long int lint;
int main(){

	int tc;
	cin>>tc;
	while(tc--){
		lint N;
		cin>>N;
		lint ans=0;
		ans+=(N/2)+(N/3)+(N/5)+(N/7);
		ans-=(N/6)+(N/10)+(N/14)+(N/15)+(N/21)+(N/35);
		ans+=(N/30)+(N/70)+(N/42)+(N/105);
		ans-=(N/210);

		cout<<N-ans<<endl;

	}




return 0;}