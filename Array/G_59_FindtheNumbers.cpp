#include <bits/stdc++.h>

using namespace std;
// Finds 2 Non Repeating elements in the array
void FindtheNos(int *arr,int size){
	int xorr=arr[0];
	int set_bit_no;
	int i;
	// int n=size-2;
	int x=0,y=0;
	for(int i=1;i<size;i++)
		xorr^=arr[i];
	set_bit_no=xorr&~(xorr-1);
	for(int i=0;i<size;i++){
		if(arr[i] &set_bit_no)
			x=x^arr[i];
		else y=y^arr[i];
	}
	if(x<y)
		cout<<x<<" "<<y<<endl;
	else
		cout<<y<<" "<<x<<endl;
}

int main(){
	int tc;
	cin>>tc;


	while(tc--){
		int size;
		cin>>size;
		// size=size*2;
		// size+=2;
		int *arr=new int[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];

		FindtheNos(arr,size);

		
	}
return 0;}