#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--){
	    int size;
	    scanf("%d",&size);
	    
	    int first=INT_MIN,second=INT_MIN,third=INT_MIN,temp;
	   // cin>>first>>second>>third;
	   //scanf("%d",&first);
	   //scanf("%d",&second);
	   //scanf("%d",&third);
	   
	        for(int i=0;i<size;i++){
	            scanf("%d",&temp);
	            if(temp>third){
	                first=second;
	                second=third;
	                third=temp;
	            }else if(temp>second){
	                first=second;
	                second=temp;
	            }else if(temp>third)
	                first=temp;
	                // cout<<first<<" "<<second<<" "<<third<<endl;
	        }

	        cout<<(first+second+third)<<endl;
	        
	   
	   
	   
	   
	}
	return 0;
}