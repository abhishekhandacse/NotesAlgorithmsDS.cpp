#include<bits/stdc++.h>

using namespace std;

vector<int> Solution::flip(string str) {
    
    int L=0,R=0,Lfinal=0,Rfinal=0;

    int curr_max = ((str[0]=='1') ?  -1  :  1);
    int msf = ((str[0]=='1') ?  -1  :  1);
    for(int i=1;i<str.size();i++){
        int value=((str[i]=='1') ?  -1  :  1);

        if(curr_max  +  value >= value){
            R=i;
            curr_max=curr_max+value;
        }else{
            L=i;R=i;
            curr_max=value;
        }

        if(msf < curr_max){
            msf=curr_max;
            Lfinal=L;
            Rfinal=R;
        }
    }
    vector<int> ans;
    if(msf!=-1){
        ans.push_back(Lfinal+1);
        ans.push_back(Rfinal+1);
    }
    return ans;
}


int main(){


	string str="10001";

	vector<int> v=Kadanes(str);
	if(v.size())
		cout<<v[0]<<" "<<v[1]<<endl;


return 0;}