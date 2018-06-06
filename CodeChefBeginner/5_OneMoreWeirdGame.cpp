#include<bits/stdc++.h>
 
using namespace std;
 
 
int weirdgame(int rows,int cols){
	if( (rows==1) && (cols==1) )
		return 0;
	return ((rows-1)*(cols-1)*2) + (rows-1) + (cols-1);
}
int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int rows=0,cols=0;
		cin>>rows>>cols;
		cout<<weirdgame(rows,cols)<<endl;
		
	}
return 0;} 