#include<bits/stdc++.h>
typedef long long int lint;
using namespace std;

string add(string num1,string num2){
		reverse(num1.begin(),num1.end());
		reverse(num2.begin(),num2.end());
		// cout<<num1<<" "<<num2<<endl;
		lint i=0,j=0;
		lint sum=0,carry=0;
		string ans;
		while( (i < num1.length()) && (j < num2.length()) ){
			sum=(num1[i]-'0')+(num2[j]-'0')+carry;
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
			sum=num2[j]-'0'+carry;
			ans+=char((sum%10)+48);
			carry=sum/10;
			j++;
		}
		if(carry)
			ans+=char(carry+48);

		
		reverse(ans.begin(),ans.end());
		return ans;
}


int main(){
	// cout<<add("0","100");
	int tc;
	cin>>tc;
	while(tc--){
		string num1,num2;
		cin>>num1>>num2;
		string it="0";
		string ans="0";
		while(it.compare(num2)!=0){
			ans=add(ans,num1);

			it=add(it,"1");
			cout<<ans;
			cout<<"-"<<it<<"-"<<endl;
		}
		// cout<<ans<<endl;

	}




return 0;}