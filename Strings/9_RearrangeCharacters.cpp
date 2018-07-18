#include <bits/stdc++.h>
using namespace std;

int main() {
    int  tc;
    cin>>tc;
    while(tc--){
        string str;
        cin>>str;
        map<char,int> mp;
        for(int i=0;i<(str.length());i++){
            if(mp.find(str[i])==mp.end())
                mp.insert(make_pair(str[i],1));
            else{
                int val=((mp.find(str[i]))->second);
                val++;
                mp.erase(str[i]);
                mp.insert(make_pair(str[i],val));
            }
        }
        priority_queue<pair<int,char>> pq;
        // putting map in pq
        for(auto i=mp.begin();i!=mp.end();i++)
            pq.push(make_pair((i->second),(i->first)));
        
        pair<int,char> p;
        p.first=-1;
        p.second='#';
        pair<int,char> t;
        string temp;
        while(!pq.empty()){
            t=pq.top();
            pq.pop();
            temp=temp+(t.second);
            //Greed approach of pushing prev
            if(p.first>0)
                pq.push(p);
            
            t.first=((t.first)-1);
            p=t;
        }
        // cout<<temp<<endl;
        if(temp.length()==str.length())
            cout<<1<<endl;
        else cout<<0<<endl;
    }
return 0;}