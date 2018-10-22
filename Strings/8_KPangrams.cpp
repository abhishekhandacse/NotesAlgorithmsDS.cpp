#include <bits/stdc++.h>
using namespace std;

int main() {
    string num;
    getline(cin,num);
    int tc=stoi(num);
    while(tc--){
        string str;
        getline(cin,str);
        unordered_set<char> st;
        for(int i=0;i<(str.length());i++){
            if(str[i]!=' '){
                int ascii=(int)str[i];
                if(ascii >=65 && ascii <=90 )
                    st.insert((char)(ascii+32));
                else st.insert(ascii);
            }
        }
        
        if(st.size()==26)
            cout<<1<<endl;
        else cout<<0<<endl;
        
    }
return 0;}