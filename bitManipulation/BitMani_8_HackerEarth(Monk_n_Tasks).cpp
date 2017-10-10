// #include <iostream>
// #include <map>
// #include <vector>
// using namespace std;
// unsigned long long int NoOfOnes(unsigned long long  int num){
//    unsigned long long  int count=0;
//     while(num){
//         num= ( (num) & (num-1) );
//         count++;
//     }
//     return count;
// }
// int main(){
//     int tc;
//     cin>>tc;
//     while(tc--){
//         unsigned  long long int N,temp,val,ones;
//         cin>>N;
//         multimap<unsigned  long long  int,unsigned long long  int> mulmap1;
//         multimap<unsigned long long  int,unsigned long long  int> mulmap2;
//         for(unsigned long long  int i=0;i<N;i++){
//             cin>>temp;
//             ones=NoOfOnes(temp);
//             mulmap1.insert(make_pair(temp,ones));
//         }
//         multimap<unsigned long long  int,unsigned long long  int>::iterator it;
//         for(it=mulmap1.begin();it!=mulmap1.end();it++)
//             mulmap2.insert(make_pair(it->second,it->first));
//         for(it=mulmap2.begin();it!=mulmap2.end();it++){
//             cout<<it->second<<" ";
//         }

//     cout<<endl;
//     }
    
// return 0;}


// #include <iostream>
// #include <map>
// #include <vector>
// #include<bits/stdc++.h>
// using namespace std;
// unsigned long long int NoOfOnes(unsigned long long  int num){
//    unsigned long long  int count=0;
//     while(num){
//         num= ( (num) & (num-1) );
//         count++;
//     }
//     return count;
// }
// int main(){
//     int tc;
//     cin>>tc;
//     while(tc--){
//         unsigned  long long int N,temp,val,ones;
//         cin>>N;
//         set<pair<unsigned  long long  int,unsigned long long  int> > set1;
//         for(unsigned long long  int i=0;i<N;i++){
//             cin>>temp;
//             ones=NoOfOnes(temp);
//             set1.insert(make_pair(ones,temp));
//         }
//         set<pair<unsigned  long long  int,unsigned long long  int> >::iterator it;
        
//         for(it=set1.begin();it!=set1.end();it++){
//             cout<<it->second<<" ";
//         }

//     cout<<endl;
//     }
    
// return 0;}

#include<bits/stdc++.h>
using namespace std;
unsigned long long int NoOfOnes(unsigned long long  int num){
   unsigned long long  int count=0;
    while(num){
        num= ( (num) & (num-1) );
        count++;
    }
    return count;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        unsigned  long long int N,temp,val,ones;
        cin>>N;
        set<pair<unsigned  long long  int,unsigned long long  int> > set1;
        int arr[N];
        for(unsigned long long  int i=0;i<N;i++){
            cin>>temp;
            arr[i]=temp;
            ones=NoOfOnes(temp);
            set1.insert(make_pair(ones,i));
        }
        set<pair<unsigned  long long  int,unsigned long long  int> >::iterator it;
        
        for(it=set1.begin();it!=set1.end();it++){
            cout<<arr[ it->second]<<" ";
        }

    cout<<endl;
    }
    
return 0;}

