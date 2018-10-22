#include <bits/stdc++.h>
using namespace std;



int val(string str,int k){
    unordered_map<char,int> mp;
    for(int i=0;i<str.length();i++){
        if(mp.find(str[i])==mp.end()){
            mp.insert(make_pair(str[i],1));
        }else{
            int val=((mp.find(str[i]))->second);
            val++;
            mp.erase(str[i]);
            mp.insert(make_pair(str[i],val) );
        }
    }
    priority_queue<int> pq;
    for(auto i=mp.begin();i!=mp.end();i++)
        pq.push(i->second);
    while(k>0){
        if(!pq.empty()){
            int val=pq.top();
            pq.pop();
            if( (val-k) > 0 ){
                val=val-k;
                pq.push(val);
                break;
            }else if((val-k)==0){
                pq.push(0);
                break;
            }else{
                pq.push(0);
                k=k-val;
            }
        }else break;
    }
    cout<<"K->"<<endl;
    int sum=0;

    while(!pq.empty()){
        int val=pq.top();
        pq.pop();
        sum+=(val*val);
    }
    return sum;
}


int main() {
    int tc;
    cin>>tc;
    while(tc--){
        string str;
        cin>>str;
        int k;
        cin>>k;
        cout<<val(str,k)<<endl;

    }
return 0;}