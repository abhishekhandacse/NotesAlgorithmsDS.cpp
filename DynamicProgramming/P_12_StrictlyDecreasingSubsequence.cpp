#include<bits/stdc++.h>
using namespace std;


void sds(vector<string> &vect,int &ans,string temp="",int count=0){
	if(vect.size()==count)
		return;

	if(temp.compare("")==0){
		ans+=1;
		sds(vect,ans,vect[count],count+1);
	
		sds(vect,ans,temp,count+1);
	}else{
		if(temp>vect[count]){
			ans+=1;
			sds(vect,ans,vect[count],count+1);

		}
		sds(vect,ans,temp,count+1);
	}
}


int main(){

	vector<string> vect;

	vect.push_back("aa");
	vect.push_back("aa");
	vect.push_back("aa");

	int ans=0;

	sds(vect,ans);

	cout<<ans<<endl;



return 0;}