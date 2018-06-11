
#include <bits/stdc++.h>

using namespace std;

void KLargest(int *arr,int size){

    sort(arr,arr+size);

    for(int i=0;i<size-2;i++)
        cout<<arr[i]<<" ";

    cout<<endl;
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int N,k;
        cin>>N;
        int *arr=new int[N];
        for(int i=0;i<N;i++)
            cin>>arr[i];

        KLargest(arr,N);
    }


return 0;}