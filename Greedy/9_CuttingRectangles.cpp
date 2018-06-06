#include <bits/stdc++.h>

using namespace std;

typedef long long int lint;
// This is not optimised solution
// int main(){
//     int tc;
//     cin>>tc;
//     while(tc--){
//         int l,w;
//         cin>>l>>w;
//         int largest;
//         if(w>l){largest=l;}
//         else{
//             largest=w;
//         }
//         int num=0;
//         while((l!=1) || (w!=1)){
//             if(w<l){
//                 l=l-w;
//             }else{
//                 w=w-l;
//             }
//             num++;
//         }
        
        
//         cout<<num<<" "<<largest<<endl;
//     }
    
// return 0;}

int main(){
    int tc;
    cin>>tc;                                                                        
    while(tc--){
        int l,w;
        cin>>l>>w;
        int largest;
        if(w>l){largest=l;}
        else{
            largest=w;
        }
        int num=0;
        while((l>0) && (w>0)){
            if(w<l){
                num+=(l/w);
                l=(l%w);
            }else{
                num+=(w/l);
                w=(w%l);
            }
        
        }
        
        
        cout<<num<<" "<<largest<<endl;
    }
    
return 0;}
