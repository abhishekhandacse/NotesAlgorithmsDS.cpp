#include <bits/stdc++.h>
typedef long long int lint;
using namespace std;


int IsUgly(int N){
    int flag=0,two=2,three=3,five=5;
    while(N!=1){
        if(N%two==0){
            N/=2;
            flag=1;
        }
        if(N%three==0){
            N/=3;
            flag=1;
        }
        if(N%five==0){
            N/=5;
            flag=1;
        }
        if(flag==0){
            return 0;
        }
        flag=0;
    }
    return 1;
}

int GetNUgly(int N){
    // Find Nth ugly number;
    int count=0,num=1;
    while(count!=N){
        if(IsUgly(num)){
            count++;
        }
    num++;
    }
    return num-1;
}

int main() {
    int tc;
    cin>>tc;
    while(tc--){
        int N;
        cin>>N;
        cout<<GetNUgly(N)<<endl;
        
    }
return 0;}
// Must Do Question..

// Refer Geeks For Geeks for complete solution..
