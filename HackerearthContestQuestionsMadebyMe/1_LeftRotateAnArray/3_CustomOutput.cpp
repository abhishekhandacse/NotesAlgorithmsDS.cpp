#include<bits/stdc++.h>

using namespace std;

int main(){

	string str;
	vector<int> arr;
	int K,counter=0;
	while(getline(cin,str)){
		if(str.size()==0)
			return 0;
		stringstream lineStream(str);
		int value;
		while(lineStream>>value){
			if(counter%2==0){
				K=value;
			}else
				arr.push_back(value);
		}
		int n=arr.size();
		for(int i=0;i<n;i++){
			cout<<arr[(i+K)%n]<<" ";
		}
	cout<<endl;
	counter++;
	arr.clear();
	}
return 0;}