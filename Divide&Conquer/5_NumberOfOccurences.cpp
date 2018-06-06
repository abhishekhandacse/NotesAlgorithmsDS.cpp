#include <bits/stdc++.h>

using namespace std;


int binarysearch(int *arr,int size,int key,int &pos){
	int low=0,high=size-1;
	while(low<=high){
		int mid=low + ((high-low)/2);
		if(arr[mid]==key){
			pos=mid;
			return 1;
		}else if(arr[mid]<key){
			low=mid+1;
		}else{
			high=mid-1;
		}
	}
	return 0;
}

int main(){
int tc;
cin>>tc;
while(tc--){
	int size,pos,Key;
	cin>>size>>Key;
	int *arr=new int[size];
	for(int i=0;i<size;i++)
		cin>>arr[i];
	if(binarysearch(arr,size,Key,pos)){
		int count=0;
		for(int i=pos;i<size;i++){
			if(arr[i]==Key)
				count++;
			else
				break;
		}
		for(int i=pos-1;i>=0;i--){
			if(arr[i]==Key)
				count++;
			else
				break;
		}
		cout<<count<<endl;
	}else{
		cout<<-1<<endl;
	}

}


return 0;}