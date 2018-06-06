#include <bits/stdc++.h>

using namespace std;

int LIS_DP(int *arr,int N){
    if(N==0)
        return 0;
    int *aux=new int[N];
    for(int i=0;i<N;i++){
        aux[i]=1;
    }
    
    for(int i=1;i<N;i++){
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]){
                aux[i]=max(aux[i],aux[j]+1);
            }
        }
    }
    // Now compute the maximum element of the array
    int max=INT_MIN;
    for(int i=0;i<N;i++){
        if(max<aux[i]){
            max=aux[i];
        }
    }
    return max;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int N;
        cin>>N;
        int *arr=new int[N];
        for(int i=0;i<N;i++)
            cin>>arr[i];
        cout<<LIS_DP(arr,N)<<endl;
    }
return 0;}