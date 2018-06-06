#include <bits/stdc++.h>
using namespace std;

int CoinChanging(int *arr,int size,int sum){
	if(sum==0)return 1;
	if(size<=0 || sum<0) return 0;

	return CoinChanging(arr,size-1,sum)+CoinChanging(arr,size,sum-arr[size-1]);
}

//Dynamic Programming // 

void print(int **arr,int rows,int cols){
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

////////////This is solution to some other problem
//i:e how to convert Rs into fixed denominations such that number of coins is minimum
// int CoinChanging_DP(int *arr,int size,int ans){
// 	int **Aux=new int*[size+1];
// 	for(int i=0;i<size+1;i++){
// 		Aux[i]=new int[ans+1];
// 	}
// 	for(int i=0;i<(size+1);i++){
// 		for(int j=0;j<(ans+1);j++){
// 			if(i==0 && j==0){
// 				Aux[i][j]=0;
// 				continue;
// 			}
// 			if(i==0 && j!=0){
// 				Aux[i][j]=INT_MAX;
// 				continue;
// 			}
// 			if(j==0 && i!=0){
// 				Aux[i][j]=0;
// 				continue;
// 			}
// 			if(j<arr[i-1]){
// 				Aux[i][j]=Aux[i-1][j];
// 			    continue;
// 			}

// 			Aux[i][j]=min(Aux[i-1][j],((j/arr[i-1]) + Aux[i-1][j%arr[i-1]] )) ;			
// 			cout<<Aux[i][j]<<" ";
// 		}
// 			cout<<endl;
// 	}
// 	print(Aux,size+1,ans+1);
// 	return Aux[size][ans];
// }

int main(){
	int arr[3]={1,2,3};
	int sum=4;
	cout<<CoinChanging(arr,(sizeof(arr)/sizeof(int)),sum)<<endl;
	cout<<CoinChanging_DP ( arr,(sizeof(arr)/sizeof(int)),sum);
return 0;	
}