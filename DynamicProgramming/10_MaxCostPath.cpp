#include <bits/stdc++.h>
using namespace std;

void Print(int **Aux,int size){
    cout<<endl<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<Aux[i][j]<<"  ";
        }
    cout<<endl;
    }
}
int MaxCostPath(int **arr,int N){
    // Print((int**)arr,N);

    int **Aux=new int*[N+2];
    for(int i=0;i<N+2;i++){
        Aux[i]=new int[N+2];
    }
    int maximum=INT_MIN;
    for(int i=0;i<(N+2);i++){
        for(int j=0;j<(N+2);j++){
            // Aux[i][j]=0;
            if( (i==0) || (j==0) || (j==N+1) ){
                Aux[i][j]=0;
                continue;
            }
            if( (i>0) && (j>0) && (i<N+1) && (j<N+1) ){
                Aux[i][j]=max(Aux[i-1][j],max(Aux[i-1][j-1],Aux[i-1][j+1])) + arr[i-1][j-1];
                if(Aux[i][j]>maximum){
                maximum=Aux[i][j];
                }    
            }
            
        }
    }
// Print((int**)Aux,N+2);
return maximum;
}

int main(){
    int tc,temp;
    cin>>tc;
    while(tc--){
        int N;
        cin>>N;
        int **arr=new int*[N];
        for(int i=0;i<N;i++){
            arr[i]=new int[N];
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>temp;
                arr[i][j]=temp;
            }
        }
       cout<<MaxCostPath((int**)arr,N)<<endl;
    }
        
    
return 0;}