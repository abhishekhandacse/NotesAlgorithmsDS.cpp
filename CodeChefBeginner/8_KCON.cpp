#include <bits/stdc++.h>
typedef long long int lint;
using namespace std;

lint Sum(lint *arr,lint N,lint K){
	// lint *complete=new lint[N*K];
	// for(lint i=0;i<(N*K);i++){
	// 	complete[i]=arr[i%N];
	// }
	// Kadanes Algorithm
	lint msf=INT_MIN,meh=0;
	for(lint i=0;i<(N*K);i++){
		meh+=arr[i%N];

		if(msf<meh)
			msf=meh;

		if(meh<0)
			meh=0;
	}
	// if(msf>0)
	// 	return msf*K;
	// else
	// 	return msf;
	return msf ;
}

lint Kadanes(lint *arr,lint size,lint K){
	lint msf=INT_MIN,meh=0;
	for(lint i=0;i<(size*K);i++){
		meh+=arr[i%size];
		if(msf<meh)
			msf=meh;
		if(meh<0)
			meh=0;
	}
	return msf;
}
// Optimised Solution Accepted
lint SumOptimised(lint *arr,lint N,lint K){
	lint sum1=0;
	for(lint i=0;i<N;i++){
		sum1+=arr[i];
	}
	lint msf1=Kadanes(arr,N,1);
	lint msf2=Kadanes(arr,N,2);

	if(K==1){
		return msf1;
	}else if(K==2){
		return msf2;
	}else{
		return max(msf2 , max( (K*sum1),((sum1)*(K-2)) + msf2 ) ) ;
	}	
}


int main(){
lint tc;
// cin>>tc;
scanf("%d",&tc);
while(tc--){
	lint N,K,temp;
	cin>>N>>K;
	lint *arr=new lint[N];
	for(lint i=0;i<N;i++){
		// cin>>arr[i];
		scanf("%ld",&arr[i]);
	}
	// cout<<Sum(arr,N,K)<<endl;
	printf("%ld\n",SumOptimised(arr,N,K));
	delete(arr);
}



return 0;}