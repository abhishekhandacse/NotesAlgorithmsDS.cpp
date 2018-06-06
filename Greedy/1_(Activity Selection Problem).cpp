#include<bits/stdc++.h>
using namespace std;



struct Time{
    int index,start,finish;
};
bool compare(Time t1,Time t2){
    return (t1.finish < t2.finish );//Sort by finish time
}
void MaxAttributes( Time *obj,int size ){
    if(size==0)
        return;

    sort(obj,obj+size,compare);//Sort obj with finish time
    cout<<(obj[0].index)<<" ";
    int prev_finish=(obj[0].finish);
    for(int i=1;i<size;i++){
        if( prev_finish < obj[i].start ){
            prev_finish=obj[i].finish;
            cout<<(obj[i].index)<<" ";
        }
    }
    cout<<endl;
}
int main() {
    int tc;
    cin>>tc;
    while(tc--){
        int N;
        cin>>N;
        int *start=new int[N];
        int *finish=new int[N];
        for(int i=0;i<N;i++)
            cin>>start[i];
        for(int i=0;i<N;i++)
            cin>>finish[i];
        Time *arr=new Time[N];
        for(int i=0;i<N;i++){
            (arr[i].index)=(i+1);
            (arr[i].start)=start[i];
            (arr[i].finish)=finish[i];
        }
        MaxAttributes(arr,N);
        
    }
return 0;}