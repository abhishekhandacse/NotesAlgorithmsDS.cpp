#include <iostream>

using namespace std;


int BinarySearch(int *arr,int size,int key){
	if(size==0)
		return 0;
	int left=0,right=size-1;
	while(left<=right){
		int mid=( left+right )/2;
		if(key==arr[mid]){
			return 1;
		}else if(key<arr[mid]){
			right=mid-1;
		}else{
			left=mid+1;
		}
	}
	return 0;
}
int main(){
int tc;
cin>>tc;
	while(tc--){
		int N,M,K;
		cin>>N>>M>>K;
		int *Ignored=new int[M];
		int *Tracked=new int[K];
		for(int i=0;i<M;i++)
			cin>>Ignored[i];
		for(int i=0;i<K;i++){
			cin>>Tracked[i];
		}
		int IgnoredTracked=0;
		int NIgnoredNtracked=0;
		for(int i=1;i<=N;i++){
			int ig=BinarySearch(Ignored,M,i);
			int tr=BinarySearch(Tracked,K,i);
			if(ig && tr){
				IgnoredTracked++;
			}else if( (!ig)&&(!tr) ){
				NIgnoredNtracked++;
			}
		}
		cout<<IgnoredTracked<<" "<<NIgnoredNtracked<<endl;

	}
return 0;}