#include<bits/stdc++.h>

using namespace std;

double mf(double mid,int *arr,int N){
	double ans=0;
	for(int i=0;i<N;i++){
	        double pr=(floor((1/(mid-arr[i])*(10000000000000) ))/10000000000000);
			ans+=(1/(mid-arr[i]));
	}
	return ans;
}

double ZeroLocation(int *arr,int N,double left,double right){
	double mid;

	while(left<right){
		mid=(left+(right-left)/2);
		// mid=(floor(mid*100)/100);
		double magfi=mf(mid,arr,N);

		if(abs(magfi)<0.0000000000001)
			return mid;
		else if (magfi>0){
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
			cout<<fixed<<setprecision(2)<<ZeroLocation(arr,size,arr[i-1],arr[i])<<" ";
		}
		cout<<endl;


	}




return 0;}#include<bits/stdc++.h>

using namespace std;

double mf(double mid,int *arr,int N){
	double ans=0;
	for(int i=0;i<N;i++){
	        double pr=(floor((1/(mid-arr[i])*(10000000000000) ))/10000000000000);
			ans+=(1/(mid-arr[i]));
	}
	return ans;
}

double ZeroLocation(int *arr,int N,double left,double right){
	double mid;

	while(left<right){
		mid=(left+(right-left)/2);
		// mid=(floor(mid*100)/100);
		double magfi=mf(mid,arr,N);

		if(abs(magfi)<0.0000000000001)
			return mid;
		else if (magfi>0){
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
			cout<<fixed<<setprecision(2)<<ZeroLocation(arr,size,arr[i-1],arr[i])<<" ";
		}
		cout<<endl;


	}




return 0;}