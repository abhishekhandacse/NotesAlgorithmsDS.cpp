#include<bits/stdc++.h>

using namespace std;

double mf(double mid,int *arr,int N){
	double ans=0;
	for(int i=0;i<N;i++){
			ans+=(1/(mid-arr[i]));
	}
	return ans;
}

double ZeroLocation(int *arr,int N,double left,double right){
	double mid;

	while(left<right){
		mid=(left+(right-left)/2);
		// mid=(floor(mid*100)/100);
		float magfi=mf(mid,arr,N);
		magfi=(floor(magfi*10000000000000)/10000000000000);
		if(magfi==0)
			return mid;
		else if (mf(mid,arr,N)>0){
			return ZeroLocation(arr,N,mid,right);
		}else return ZeroLocation(arr,N,left,mid);
	}

	return -1;

}



int main(){
	int tc;
	cin>>tc;

	while(tc--){
		int size;
		cin>>size;
		int arr[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];

		for(int i=1;i<size;i++){
			cout<<setprecision(2)<<ZeroLocation(arr,size,arr[i-1],arr[i])<<endl;
		}


	}




return 0;}