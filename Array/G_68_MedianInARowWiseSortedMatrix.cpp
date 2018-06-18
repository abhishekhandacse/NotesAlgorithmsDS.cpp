#include <bits/stdc++.h>

using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int row,col;
		cin>>row>>col;
		vector<int> vect;
		int temp;
		for(int i=0;i<(row*col);i++){
			cin>>temp;
			vect.push_back(temp);
		}
		sort(vect.begin(),vect.end());

		cout<<vect[ ((row*col)/2) ]<<endl;

	}


return 0;}