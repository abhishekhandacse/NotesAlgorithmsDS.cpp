#include<bits/stdc++.h>

using namespace std;

long candies(int size, vector<int> &arr) {
    vector<int> aux(size,1);
    
    for(int i=1;i<size;i++){
        if(arr[i]>arr[i-1]  && aux[i]<=aux[i-1])
            aux[i]=aux[i-1]+1;
    }
    for(int i=size-1;i>0;i--){
        if(arr[i-1]>arr[i]  &&  aux[i-1]<=aux[i])
            aux[i-1]=aux[i]+1;
    }
    long sum=0;
    for(auto i:aux)
        sum+=i;
    
    return sum;

}



int main(){

	long n;
	cin>>n;
	vector<int> arr(n,0);

	for(int i=0;i<n;i++)
		cin>>arr[i];

	cout<<candies(arr.size(),arr);






return 0;}