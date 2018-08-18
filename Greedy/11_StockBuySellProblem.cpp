#include<bits/stdc++.h>

using namespace std;

void StockBuySell(vector<int> &prices){
	vector<pair<int,int>> buysell;
	int start=0,end=0;
    prices.push_back(-100);
	for(int i=1;i<prices.size();i++){
		if(prices[i]-prices[i-1]>0)
			end++;
		else{
			if(start!=end)
				buysell.push_back(make_pair(start,end) );
			start=i;end=i;
		}
	}

    if(buysell.size()){
    	for(auto i:buysell){
    		cout<<"("<<i.first<<" "<<i.second<<") ";
    	}
    }else cout<<"No Profit";
}

int main(){

	int tc;
	cin>>tc;
	while(tc--){
		int size;
		cin>>size;
		vector<int> prices(size);
		
		for(int i=0;i<size;i++)
			cin>>prices[i];	

		StockBuySell(prices);
		cout<<endl;

	}




return 0;}