#include <iostream>
#include <climits>
using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N,min=INT_MAX,sum=0,temp,index=0;
		cin>>N;
		for(int i=0;i<N;i++){
			cin>>temp;
			if(min>temp){
				min=temp;
				index=i+1;
			}
			sum+=temp;
		}
		cout<<index<<endl;
	}
return 0;}