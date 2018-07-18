#include <bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		string num1,num2;
		cin>>num1>>num2;
		reverse(num1.begin(),num1.end());
		reverse(num2.begin(),num2.end());

		string ans;

		int i=0,j=0;
		int sum=0,carry=0;
		while( (i < num1.length()) && (j < num2.length()) ){
			sum=(num1[i]-'0')+(num2[i]-'0')+carry;
			ans+=char((sum%10)+48);
			carry=sum/10;
			i++;j++;
		}
		while( i < num1.length() ){
			sum=num1[i]-'0'+carry;
			ans+=char((sum%10)+48);
			carry=sum/10;
			i++;
		}

		while( j < num2.length()){
			sum=num2[i]-'0'+carry;
			ans+=char((sum%10)+48);
			carry=sum/10;
			j++;
		}
		if(carry)
			ans+=char(carry+48);

		// cout<<ans<<endl;
		reverse(ans.begin(),ans.end());
		reverse(num1.begin(),num1.end());
		reverse(num2.begin(),num2.end());
		if(ans.length()==num1.length())
			cout<<ans<<endl;
		else cout<<num1<<endl;
	}






return 0;}