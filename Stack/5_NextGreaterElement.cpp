#include <bits/stdc++.h>

using namespace std;

void NextGreaterBF(int *arr,int size){
	int max=-1;
	for(int i=0;i<size;i++){
		max=-1;
		for(int j=i+1;j<size;j++){
			if(arr[j]>arr[i]){
				max=arr[j];
				break;
			}
		}
		cout<<max<<" ";
	}
	cout<<endl;
}
void NextGreaterOpt(int *arr,int size){
	stack<int> s;
	s.push(arr[0]);
	for(int i=1;i<size; i++){
		int next=arr[i];
		if(s.empty()==false){
			int ele=s.top();
			s.pop();
			while(ele<next){
				cout<<next<<" ";
				if(s.empty())
					break;
				ele=s.top();
				s.pop();
			}
			if(ele>next)
				s.push(ele);
		}
		s.push(next);
	}
	while(!s.empty()){
		cout<<-1<<" ";
		s.pop();
	}
	cout<<endl;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int size;
		cin>>size;
		int *arr=new int[size];
		for(int i=0;i<size;i++)
			cin>>arr[i];

		// NextGreaterBF(arr,size);
		NextGreaterOpt(arr,size);
	}
return 0;}