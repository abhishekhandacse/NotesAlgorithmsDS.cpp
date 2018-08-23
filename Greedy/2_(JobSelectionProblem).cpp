#include<bits/stdc++.h>

using namespace std;


struct job{
	int jid;
	int deadline;
	int profit;
};
bool compare(job a,job b){
	return ((a.profit) > (b.profit)) ;
}
void maxjobdonemaxprofit(vector<job> &jobs){

	int N=jobs.size();
	sort(jobs.begin(),jobs.end(),compare);

	vector<bool> slots(N+1,false);

	int num=0,profit=0;
	for(auto i:jobs){
		for(int j=(i.deadline);j>=1;j--){
			if(slots[j]==false){
				slots[j]=true;
				num++;
				profit+=(i.profit);
				break;
			}
		}
	}

	cout<<num<<" "<<profit<<endl;

}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N;
		cin>>N;

		vector<job> jobs;
		for(int i=0;i<N;i++){
			int a,b,c;
			cin>>a>>b>>c;
			job j={a,b,c};
			jobs.push_back(j);
		}

		maxjobdonemaxprofit(jobs);
	}
}