#include <bits/stdc++.h>

using namespace std;

struct triplets{
	int sum;
	int x;
	int y;
};

bool compare(triplets t1,triplets t2){
	return ( (t1.sum)<(t2.sum) ) ;
}
void FindKPairs(int *arr1,int *arr2,int n1,int n2,int k){
	vector<triplets> vect;
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			triplets t={arr1[i]+arr2[j],arr1[i],arr2[j]};
			vect.push_back(t);
		}
	}
	sort(vect.begin(),vect.end(),compare);
	// Print First K Pairs
	vector<triplets>::iterator it;
	for(it=vect.begin();it!=vect.end();it++){
		if(k==0)
			break;
		cout<<(it->x)<<" "<<(it->y);
		k--;
	cout<<endl;
	}
}
int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int n1,n2,k;
		cin>>n1>>n2>>k;
		int *arr1=new int[n1];
		int *arr2=new int[n2];
		for(int i=0;i<n1;i++)
			cin>>arr1[i];
		for(int i=0;i<n2;i++)
			cin>>arr2[i];
		FindKPairs(arr1,arr2,n1,n2,k);
	}


return 0;}