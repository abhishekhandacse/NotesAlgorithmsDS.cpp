#include <iostream>
using namespace std;

int main(){
	int num;
	cin>>num;
	int *arr=new int[num];
	int a=0,b=0,c=0;
	for(int i=0;i<num;i++){
		cin>>arr[i];
		if((i%3)==0){
			a+=arr[i];
		}else if(((i)%3)==1){
			b+=arr[i];
		}else{
			c+=arr[i];
		}
	}
	if(a>b && a>c){
		cout<<"chest"<<endl;
	}else if(b>a && b>c){
		cout<<"biceps"<<endl;
	}else{
		cout<<"back"<<endl;
	}

	





return 0;}