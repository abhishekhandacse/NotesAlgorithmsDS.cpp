#include <bits/stdc++.h>

using namespace std;

int main(){
	int S,KG;
	cin>>S>>KG;
	float ans=DBL_MAX;
	while(S--){
		int a,b;
		cin>>a>>b;
		if(ans>((float)((float)a/b)*((float)KG))){
			ans=((float)((float)a/b)*((float)KG));
		}
	}
	cout<<fixed<<setprecision(10)<<ans;




return 0;}