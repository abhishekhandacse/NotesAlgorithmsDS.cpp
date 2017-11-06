#include <iostream>
#include <climits>
using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int size,Reziba,lb=INT_MIN,ub=INT_MAX,flag=0;
		cin>>size>>Reziba;
		int *arr=new int[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];
		// Main Login Begins
		for(int i=0;i<size-1;i++){
			if((arr[i] > ub)  ||  (arr[i] < lb)){
				flag=1;
				break;
			}
			if(Reziba<arr[i]){
				ub=arr[i];
			}else if(Reziba>arr[i]){
				lb=arr[i];
			}
			
		}
		if((arr[size-1]!=Reziba)   ||   ( flag ) ) {
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}

	}
return 0;}