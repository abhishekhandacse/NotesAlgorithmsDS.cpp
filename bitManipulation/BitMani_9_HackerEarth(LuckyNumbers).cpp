// #include<bits/stdc++.h>
// typedef unsigned long long int lint;
// using namespace std;
// bool IsMagical(lint num){
// 	lint count=0;
// 	while(num){
// 		num= (num ) & (num-1);
// 		count++;
// 	}
// 	return count==2;
// }
// int main(){
// 	int tc;
// 	scanf("%d",&tc);
// 	while(tc--){
// 		lint N,Sum=0;
// 		scanf("%u",&N);
// 		for(int i=0;i<(N+1);i++){
// 			if(IsMagical(i))
// 				Sum+=i;
// 		}
// 		printf("%u\n",Sum);
// 	}
// return 0;}

//  Optimised Approach...

// |
// |2+1
// |4+1 4+2
// |8+1 8+2 8+4
// |16+1 16+2 16+4 16+8
// |______________________________

#include<bits/stdc++.h>
typedef unsigned long long int lint;
using namespace std;
int main(){
	int tc;
	scanf("%d",&tc);
	while(tc--){
		lint N,Sum=0,i=2,count=0,flag=0;
		scanf("%llu",&N);
		while(1){
			count++;
			for(lint j=0;j<count;j++){
				Sum=((Sum+i+(j+1))%(1000000000000000007));
				if( (i+j+1)>N ){
					flag=1;
					break;
				}
			}
		if(flag)
			break;
		i*=2;

		}
	printf("%lld\n",Sum);
	}

return 0;}