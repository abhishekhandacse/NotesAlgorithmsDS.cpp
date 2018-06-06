#include <bits/stdc++.h>

using namespace std;

bool compare(const pair<int,int> &p1,const pair<int,int> &p2){
	return (( (p1.first) / (p1.second))  >  ( (p2.first)/(p2.second) )) ;
}

double Knapsack(vector<pair<int,int>> &vect,int W){
	double value=0.0;
	sort(vect.begin(),vect.end(),compare);
	vector<pair<int,int>>::iterator it;
	for(it=vect.begin();it!=vect.end();it++){
		if( (W-(it->second)) >=0 ){
			// Complete Inclusion
			W=W-(it->second);
			value=value+(it->first);
		}else{
			// Fractional Knapsack
			value=value + double( (double)(it->first)* ((W) / ((double)(it->second))) ) ;
			W=0;
			// Knapsack Full
			break;
		}
	}
	return value;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){

		vector<pair<int,int>> vect;
		int size,W,val,wt;
		cin>>size>>W;
		for(int i=0;i<(size);i++){
			cin>>val>>wt;
			vect.push_back(make_pair(val,wt));	
		}
		
		cout<<fixed<<setprecision(2);
		cout<<Knapsack(vect,W)<<endl;	
	}
	
return 0;}