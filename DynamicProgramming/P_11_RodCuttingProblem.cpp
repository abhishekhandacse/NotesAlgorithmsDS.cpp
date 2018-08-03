#include<iostream>

using namespace std;


int rodcutting(int *arr,int size,int len){
	int dp[size][len+1];

	for(int i=0;i<size;i++)
		dp[i][0]=0;

	for(int i=0;i<size;i++){
		for(int j=1;j<(len+1);j++){
			if(i==0){
				if( (j%(i+1))==0  )
					dp[i][j]=(j/(i+1) )*(arr[i]);
				else{
					dp[i][j]=(j% (i+1))*(arr[i]);
					dp[i][j]+=dp[i][(j%(i+1))];
				}
			}else{

				if((i+1)>j)
					dp[i][j]=dp[i-1][j];
				else dp[i][j]=max(dp[i-1][j],( ((j/(i+1) )*(arr[i])) + (dp[i][(j%(i+1))])      ));
			}
		}
	}

	for(int i=0;i<size;i++){
		for(int j=0;j<(len+1);j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}

return dp[size-1][len];
}



int main(){

	int tc;
	cin>>tc;
	while(tc--){
		int size;
		cin>>size;
		int arr[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];

		int len;
		cin>>len;
		cout<<rodcutting(arr,size,len)<<endl;
	}







return 0;}