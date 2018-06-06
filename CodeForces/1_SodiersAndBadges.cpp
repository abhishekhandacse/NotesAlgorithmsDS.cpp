#include <bits/stdc++.h>
using namespace std;
#define MAX 3001
typedef long long int lint;
void print(int *arr,int size){
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
void printVect(vector<int> vect){
	for(int i=0;i<vect.size();i++)
		cout<<vect[i]<<" ";

	cout<<endl;
}
int main(){
	int size;
	cin>>size;
	int *arr=new int[size];
	
	for(int i=0;i<size;i++)
		cin>>arr[i];

	sort(arr,arr+size);

	int *hashmap=(int *)calloc(MAX,sizeof(int));
	for(int i=0;i<size;i++){
		hashmap[arr[i]]=hashmap[arr[i]]+1;
	}
	vector<int> vect;
	// print(hashmap,MAX);
	for(int i=1;i<MAX;i++){
		if(hashmap[i]==0)
			vect.push_back(i);
	}
	// Coolness Factor can only be increased
	// printVect(vect);
	int *arr_aux=(int *)calloc(size,sizeof(int));
	int counter=0;
	for(int i=1;i<size;i++){
		if(arr[i]==arr[i-1]){
			while((vect[counter]-arr[i])<0){
				counter++;
			}

			arr_aux[i]=vect[counter];
			counter++;
		}
	}
	lint sum=0;
	// print(arr_aux,size);
	for(int i=0;i<size;i++){
		if(arr_aux[i]==0)
			continue;

		sum+=abs(arr_aux[i]-arr[i]);
	}
	cout<<sum<<endl;	

return 0;}