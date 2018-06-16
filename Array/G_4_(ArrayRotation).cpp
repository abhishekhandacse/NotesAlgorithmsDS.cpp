#include <bits/stdc++.h>

using namespace std;

void ArrayOfAlternate(int *arr,int N){
	int negative=0,positive=0;
	for(int i=0;i<N;i++){
	    if(arr[i]>=0){
	        positive++;
	    }else{
	        negative++;
	    }
	}
	    
	int *pos=new int[positive];
	int *neg=new int[negative];
	int pindex=0,nindex=0;
	for(int i=0;i<N;i++){
		if(arr[i]>=0){
			pos[pindex]=arr[i];
			pindex++;
		}else{
			neg[nindex]=arr[i];
			nindex++;
		}

	}
	// Print Alternativly Pos -ve elements
	pindex=0,nindex=0;
	while( (pindex<positive) && (nindex<negative) ){
		cout<<pos[pindex]<<" "<<neg[nindex]<<" ";
		pindex++;
		nindex++;		
	}
	while(pindex<positive){
		cout<<pos[pindex]<<" ";
		pindex++;
	}
	while(nindex<negative){
	    cout<<neg[nindex]<<" ";
	    nindex++;
	}
	cout<<endl;

}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N;
		cin>>N;
		int *arr=new int[N];
		for(int i=0;i<N;i++)
			cin>>arr[i];

		ArrayOfAlternate(arr,N);
	}


return 0;}