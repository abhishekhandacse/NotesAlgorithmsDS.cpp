#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int tc;
    cin>>tc;
    while(tc--){
        char t;
        int len;
        cin>>len;
        list<char> q;
        set<char> st;
        for(int i=0;i<len;i++){
            cin>>t;
            if(st.find(t)==st.end()){
                st.insert(t);
                q.push_back(t);
            }else{
                q.remove(t);
            }
            if(q.empty())
                    cout<<-1<<" ";
                else cout<<q.front()<<" ";
        }
        cout<<endl;
            
    }
        
        	
return 0;}