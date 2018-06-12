#include <bits/stdc++.h>

using namespace std;

int MaxSumSequence(int *arr,int size){
	int *aux=(int*)calloc(size,sizeof(int));
	for(int i=0;i<size;i++)
		aux[i]=arr[i];

	for(int i=1;i<size;i++){
		for(int j=0;j<i;j++){
			if(arr[i]>arr[j]  &&  aux[i] < aux[j]+arr[i]){
				aux[i]=aux[j]+arr[i];
			}
		}
	}



	int max=INT_MIN;

	for(int i=0;i<size;i++)
		if(max<aux[i])
			max=aux[i];

	free(aux);
	return max;
}

int main(){
	int tc;
	cin>>tc;


	while(tc--){
		int size;
		cin>>size;
		int *arr=new int[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];

		cout<<MaxSumSequence(arr,size)<<endl;

		
	}
return 0;}