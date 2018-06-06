#include <bits/stdc++.h>
using namespace std;
int AppearOnce(int *arr,int N){
    int size=500;
    int *hash=new int[size];
    for(int i=0;i<size;i++)
        hash[i]=0;
    for(int i=0;i<N;i++){
        hash[arr[i]-1]+=1;
    }
    for(int i=0;i<size;i++){
        if(hash[i]%2!=0){
            delete hash;
            return i+1;
        }
    }
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int N;
        cin>>N;
        int *arr=new int[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        cout<<AppearOnce(arr,N)<<endl;
    }
return 0;}