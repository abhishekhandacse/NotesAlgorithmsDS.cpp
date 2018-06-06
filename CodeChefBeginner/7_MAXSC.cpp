#include <bits/stdc++.h>
typedef long long int lint;
using namespace std;



lint MaxSum(lint **arr,lint N){
	lint prev_max=INT_MAX,sum=0;

	for(lint i=N-1;i>=0;i--){
		lint max=INT_MIN;
		for(lint j=0;j<N;j++){
			if( (arr[i][j] > max)  &&  (arr[i][j] < prev_max) ){
				max=arr[i][j];
			}
		}
		if(max==INT_MIN){
			return -1;
		}

		prev_max=max;
		sum+=prev_max;
	}
	return sum;
}


int main(){
lint tc;
cin>>tc;
while(tc--){
	// Dynamically create 2d matrix
	lint N;
	cin>>N;
	lint **arr=new lint*[N];
	for(lint i=0;i<N;i++){
		arr[i]=new lint[N];
	}
	for(lint i=0;i<N;i++){
		for(lint j=0;j<N;j++){
			cin>>arr[i][j];
		}
	}

	cout<<MaxSum(arr,N)<<endl;

}

return 0;}