
using namespace std;
#define MOD 1000000007
int dp[1001][801];
int coeff(int N,int K){
	K=min(K,(N-K));

	
	for(int i=0;i<(N+1);i++){
		for(int j=0;j<(K+1);j++){
			dp[i][j]=0;
		}
	}

	dp[0][0]=1;
    if(dp[N][K])return dp[N][K];
	for(int i=0;i<(N+1);i++){
		for(int j=0;j<(K+1);j++){
			if(j==0){
				dp[i][j]=1;
			}else if(i){
				dp[i][j]=((dp[i-1][j-1]+dp[i-1][j])%MOD);
			}
		}
	}

	return dp[N][K];
}



int main(){

int tc;
cin>>tc;
while(tc--){
	int N,K;
	cin>>N>>K;

	cout<<coeff(N,K)<<endl;
}



return 0;}