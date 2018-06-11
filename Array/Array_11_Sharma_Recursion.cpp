#include <bits/stdc++.h>

using namespace std;


void printBinary(int *arr,int size,int *aux,int k,vector<int> &vect){

	if(k==size){
		int num=0;
		for(int i=0;i<size;i++)
			if(aux[i]){
				num=(num*10)+arr[i];
				cout<<arr[i];
			}
		if(num)
			vect.push_back(num);
		cout<<endl;
		return;
	}

	aux[k]=0;
	printBinary(arr,size,aux,k+1,vect);
	aux[k]=1;
	printBinary(arr,size,aux,k+1,vect);

}

int main(){

	int arr[]={1,2,3};
	int aux[]={0,0,0};
	int size=(sizeof(arr)/sizeof(int));
	vector<int> vect;
	printBinary(arr,size,aux,0,vect);
	cout<<endl<<endl;
	sort(vect.begin(),vect.end());
	for(int i=0;i<vect.size();i++)
		cout<<vect[i]<<endl;
	

}