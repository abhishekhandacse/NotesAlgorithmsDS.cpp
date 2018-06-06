#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        double a,b,c;
        cin>>a>>b>>c;
        if(c==0){
            if(a==b)
                cout<<1<<endl;
            else
                cout<<0<<endl;
        continue;
        }

        double num1=double((b-a)/c);
        double num2=(int)num1;
        if((num1>=0) && (num1==num2) ){
            cout<<1<<endl;
        }else{
            cout<<0<<endl;
        }
    }
    
    
return 0;}