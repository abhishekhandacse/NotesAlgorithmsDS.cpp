#include <bits/stdc++.h>

using namespace std;


struct Jobs{
	int id;
	int deadline;
	int profit;
};
bool compare(Jobs J1,Jobs J2){
	return (J1.profit  >  J2.profit);
}
void JobSequenceProblem(Jobs *J,int size){
	if(size==0)
		return;
	int maxDead=0;
	sort(J,J+size,compare);
	for(int i=0;i<size;i++){
		if(J[i].deadline > maxDead){
			maxDead=( J[i].deadline ) ;
		}
	}
	int slots[maxDead];
	for(int i=0;i<maxDead;i++){
		slots[i]=-1;
	}
	int Jobs=0,profit=0;
	for(int i=0;i<size;i++){
		for(int j=( (J[i].deadline)-1);j>=0;j--){
			if(slots[j]==-1){
				slots[j]=(J[i].id);
				profit+=(J[i].profit);
				Jobs++;
				break;
			}
		}
	}
	// for(int i=0;i<maxDead;i++){
	// 	cout<<slots[i]<<" ";
	// }
	// cout<<endl;
	cout<<Jobs<<" "<<profit<<endl;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N;
		cin>>N;
		Jobs *arr=new Jobs[N];
		for(int i=0;i<N;i++){
			int Temp;
			cin>>Temp;
			(arr[i].id)=Temp;
			cin>>Temp;
			(arr[i].deadline)=Temp;
			cin>>Temp;
			(arr[i].profit)=Temp;
		}
		JobSequenceProblem(arr,N);
	}
return 0;}