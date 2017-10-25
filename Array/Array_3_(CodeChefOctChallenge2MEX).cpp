// #include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <cstdio>

using namespace std;

int main(){
int tc;
// cin>>tc;
scanf("%d",&tc);
while(tc--){
	int N,K,temp;
	// cin>>N>>K;
	scanf("%d",&N);
	scanf("%d",&K);
	set<int> numbers;
	for(int i=0;i<N;i++){
		// cin>>temp;
		scanf("%d",&temp);
		numbers.insert(temp);
	}
	int index=0;
	while(K){
		if(numbers.find(index)==numbers.end()){
			K--;
			index++;
		}else{
			index++;
		}
	}
	while(!(numbers.find(index)==numbers.end())){
		index++;
	}
	// cout<<index<<endl;
	printf("%d\n",index);
}
return 0;}