#include <bits/stdc++.h>

using namespace std;

int main(){
int tc;
cin>>tc;
while(tc--){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int flag=0;
	if( ((a==b)&&(c==d)) || ((a==c)&&(b==d)) ||((a==d)&&(b==c)) ){
		flag=1;
	}
	if(flag){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}

return 0;}