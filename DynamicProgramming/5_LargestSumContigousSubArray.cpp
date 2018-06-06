
// Brute Force Approach
// Time Complexity=O(N^3)
// Space Complexity=O(N)
#include <bits/stdc++.h>
using namespace std;

int BruteForce(int *arr,int num){
    int sum=0,max=INT_MIN;
        for(int i=0;i<num;i++){
            for(int j=i;j<num;j++){
                for(int k=i;k<=j;k++){
                    sum+=arr[k];
                }
                if(sum>max){
                    max=sum;
                }
                sum=0;
            }
        }
        return max;
}

int KadanesAlgo(int *arr,int num){
    int max_ending_here=0,max_so_far=INT_MIN;
    for(int i=0;i<num;i++){
        max_ending_here=max_ending_here+arr[i];
        if(max_so_far<max_ending_here)
            max_so_far=max_ending_here;

        if(max_ending_here<0)
            max_ending_here=0;
    }
    return max_so_far;
}






// Driver Function
int main() {
    int tc;
    cin>>tc;
    while(tc--){
        int num;
        cin>>num;
        int arr[num];
        for(int i=0;i<num;i++){cin>>arr[i];}
        cout<<BruteForce(arr,num)<<endl;
        cout<<KadanesAlgo(arr,num);
        
    }
    	
return 0;}
//Kadanes Algorithm
