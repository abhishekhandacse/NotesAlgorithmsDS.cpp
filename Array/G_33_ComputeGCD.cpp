#include <iostream>
using namespace std;

int gcd(int a,int b){
    if(a==0)
        return b;
    return gcd((b%a),a);
}

int getgcd(int *arr,int size){
    int ans=arr[0];
    
    for(int i=1;i<size;i++){
        ans=gcd(ans,arr[i]);
        if(ans==1)
            return 1;
    }
    return ans;
}

int main() {
	// int tc;
	// cin>>tc;
	// while(tc--){
	//     int size;
	//     cin>>size;
	//     int *arr=new int[size];
	//     for(int i=0;i<size;i++)
	//         cin>>arr[i];
	    
	//     cout<<getgcd(arr,size)<<endl;   
	    
	// }

	int arr[]={10,14};
	cout<<getgcd(arr,2)<<gcd(10,14);
	return 0;
}