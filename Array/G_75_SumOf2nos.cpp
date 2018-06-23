#include <bits/stdc++.h>
using namespace std;



int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int size1,size2;
		cin>>size1>>size2;
		vector<int> arr1;
		vector<int> arr2;
		int temp;
		for(int i=0;i<size1;i++){
			cin>>temp;
			arr1.push_back(temp);
		}
		for(int i=0;i<size2;i++){
			cin>>temp;
			arr2.push_back(temp);
		}
		reverse(arr1.begin(),arr1.end());
		reverse(arr2.begin(),arr2.end());
		int i,j,sum,carry=0;
		for(i=0,j=0;(i<size1) && (j<size2);i++,j++){
			arr1[i]=arr1[i]+arr2[j]+carry;
			sum=arr1[i]%10;
			carry=arr1[i]/10;
			arr1[i]=sum;
		}
		for(;i<size1;i++){
			arr1[i]=arr1[i]+carry;
			sum=arr1[i];
			arr1[i]=sum%10;
			carry=sum/10;
		}
		for(;j<size2;j++){
			sum=arr2[j]+carry;
			arr1.push_back(sum%10);
			carry=sum/10;
		}
		if(carry)
			arr1.push_back(carry);

		reverse(arr1.begin(),arr1.end());
		for(auto it=arr1.begin();it!=arr1.end();it++)
			cout<<(*it)<<" ";
		cout<<endl;

	}



return 0;}