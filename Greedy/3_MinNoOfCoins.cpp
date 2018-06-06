#include <bits/stdc++.h>

using namespace std;

int MinNoCoins(int deno[],int size,int amount){
	// vector<int> vect;
	int counter=0;
	for(int i=size-1;i>=0;i--){
		while( amount >= deno[i] ){
			amount=amount-deno[i];
			// vect.push_back(deno[i]);
			counter++;
		}
	}
	return counter;
}
int main(){
	int deno[]={1,2,5,10,20,50,100,500,1000};
	int size=(sizeof(deno)/sizeof(int) );
	int amount=2600;
	cout<<MinNoCoins(deno,size,amount)<<endl;

return 0;}