#include <bits/stdc++.h>

using namespace std;

void ArrayOfAlternate(int *arr,int N){
	int negative=(N/2),positive=N-negative;
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
	if(pindex<positive)
		cout<<pos[pindex]<<endl;

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