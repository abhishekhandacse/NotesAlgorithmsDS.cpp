#include <bits/stdc++.h>

using namespace std;

int bs(int *arr,int low ,int high){
    int mid=low + ((high-low)/2) ;
    if(low>high) return arr[mid];

    if(low==high) return arr[low];

    if( (mid==0 || arr[mid]<arr[mid-1]) && (mid==high || arr[mid]<arr[mid+1] ))
        return arr[mid];

    if(arr[mid] < arr[high])
        return bs(arr,low,mid-1);
    else
        return bs(arr,mid+1,high);            
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
        cout<<bs(arr,0,N-1)<<endl;
    }
    
    
return 0;}