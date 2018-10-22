#include<bits/stdc++.h>
using namespace std;

int main(){
  int tc;
  cin>>tc;
  while(tc--){
    string str;
    cin>>str;
    int len=str.length();
    string rev=str;
    reverse(rev.begin(),rev.end());
    
    char first=(char)rev[0];

    if((first-'0')<=5){
       rev[0]='0';

    }else{
      // Carry propagation may be involved
      if(str.length()>1){
          int carry=1;
          rev[0]=char(48);
          int i=1;
          while(carry && (i<len)) {
            int num=rev[i]-'0';
            int sum=num+carry;
            
            rev[i]=char((sum%10)+48);
            carry=sum/10;
            i++;
          }

          if(carry)
            rev+=to_string(carry);

      }else{
        rev[0]='0';
        rev+='1';

      }
    }
    
    
   string ans=rev;
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
  }




return 0;}