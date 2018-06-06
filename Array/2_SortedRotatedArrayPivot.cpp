#include <bits/stdc++.h>
using namespace std;


int pivot(int *arr,int n){
	int low=0,high=n-1,mid;

	while(1){
		mid=low+(high-low)/2;
		if(mid==0  || mid==n-1)
			return -1;
		
		//HillTop
		if(mid!=0 && mid!=n-1 && arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
			return mid;

		
		//Uphill
		if( mid>0 && mid<(n-1) && arr[mid-1] <arr[mid] && arr[mid] < arr[mid+1])
			low=mid+1;
		//Downhill
		else if (mid>0 && mid<(n-1) && arr[mid-1] > arr[mid] && arr[mid] > arr[mid+1] )
			high=mid-1;
	}
	return -1;
}
int binarysearch(int *arr,int low,int high,int key){
	int mid;

	while(low<=high){
		mid=low+(high-low)/2;
		if(key==arr[mid])
			return mid;
		else if (key < arr[mid]){
			high=mid-1;
		}else
			low=mid+1;
	}
	return -1;
}
int binarysearchright(int *arr,int low,int high,int key){
	int mid;

	while(low<=high){
		mid=low+(high-low)/2;
		if(key==arr[mid])
			return mid;
		else if (key < arr[mid]){
			low=mid+1;
		}else
		    high=mid-1;
			
	}
	return -1;
}
int index(int *arr,int n,int key){
	int p=pivot(arr,n);
	cout<<p<<endl;
	if(p==-1){
		int s1=binarysearch(arr,0,n,key);
		int s2=binarysearchright(arr,0,n,key);
		if(s1!=-1)
			return s1;
		else if (s2!=-1)
			return s2;
		else return -1;
	}else{
		int ans1=binarysearch(arr,0,p,key);
		int ans2=binarysearchright(arr,p+1,n,key);
		if(ans1!=-1){
			return ans1;
		}else if(ans2!=-1)
			return ans2;
		else
			return -1;
	}
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int size,key;
        cin>>size>>key;
        int *arr=new int[size];
        for(int i=0;i<size;i++)
            cin>>arr[i];
        int ans=index(arr,size,key);
        if(ans==-1)
            cout<<"OOPS! NOT FOUND"<<endl;
        else
            cout<<ans<<endl;
    }

	// int arr[]={25,36,202,100,58,56,65,87,45,1};
	// int n=sizeof(arr)/sizeof(int);

	// cout<<index(arr,n,25);




return 0;}