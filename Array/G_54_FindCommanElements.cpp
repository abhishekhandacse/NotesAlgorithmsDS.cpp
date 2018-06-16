#include <iostream>

using namespace std;

void printmin(int *arr1,int *arr2,int *arr3,int n1,int n2,int n3){
	int i=0,j=0,k=0,flag=0;
	while((i<n1) && (j<n2)  && (k<n3)){
		if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
			flag=1;
			cout<<arr1[i]<<" ";
			i++;j++;k++;
		}else if(arr1[i] < arr2[j] && arr1[i]<arr3[k]){
			i++;
		}else if(arr2[j] < arr1[i] && arr2[j]<arr3[k]){
			j++;
		}else{
			k++;
		}
	}
	if(!flag){
		cout<<-1;
	}
	cout<<endl;
}

int main(){

	int tc;
	cin>>tc;
	while(tc--){
		int n1,n2,n3;
		cin>>n1>>n2>>n3;
		int *arr1=new int[n1];
		int *arr2=new int[n2];
		int *arr3=new int[n3];
		for(int i=0;i<n1;i++)
			cin>>arr1[i];
		for(int i=0;i<n2;i++)
			cin>>arr2[i];
		for(int i=0;i<n3;i++)
			cin>>arr3[i];

		printmin(arr1,arr2,arr3,n1,n2,n3);
	}




return 0;}