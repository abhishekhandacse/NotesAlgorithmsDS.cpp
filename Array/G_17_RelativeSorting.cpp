#include <bits/stdc++.h>

using namespace std;

void sortlikea2(int *arr1,int *arr2,int size1,int size2){
	map<int,int> mp;
	map<int,int> ::iterator it;
	for(int i=0;i<size1;i++){
		it=mp.find(arr1[i]);
		if(it==mp.end()){
			mp.insert(make_pair(arr1[i],1));
		}else{
			int freq=it->second;
			freq++;
			mp.erase(it);
			mp.insert(make_pair(arr1[i],freq));
		}
	}
	int counter=0;
	for(int i=0;i<size2;i++){
		it=mp.find(arr2[i]);
		if(it!=mp.end()){//Element Found
			for(int i=0;i<(it->second);i++){
				arr1[counter]=(it->first) ;
				counter++;
			}
		mp.erase(it);//Erase the element already entered in hashmap
		}
	}
	// Copy the remaining elements of the array
	for(it=mp.begin();it!=mp.end();it++){
		for( int i=0;i<(it->second);i++){
			arr1[counter]=(it->first);
			counter++;
		}
	}


}

void printarray(int *arr,int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int M,N;
		cin>>M>>N;
		int *arr1=new int[M];
		int *arr2=new int[N];
		
		for(int i=0;i<M;i++)
			cin>>arr1[i];

		for(int i=0;i<N;i++)
			cin>>arr2[i];		

		sortlikea2(arr1,arr2,M,N);
		printarray(arr1,M);

	}



return 0;}