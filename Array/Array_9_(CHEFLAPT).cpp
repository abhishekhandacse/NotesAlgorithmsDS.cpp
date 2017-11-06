#include <iostream>
using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int size,temp;
		cin>>size;
		int arr[size];
		for(int i=0;i<size;i++){
			arr[i]=0;
		}
		for(int i=0;i<size;i++){
			cin>>temp;
			arr[temp-1]=arr[temp-1]+1;
		}
		for(int i=0;i<size;i++){
			if(arr[i]==1){
				temp=i;
				break;
			}
		}
		cout<<temp+1<<endl;
	}
return 0;}