#include <bits/stdc++.h>

using namespace std;


void HappiestTrip(int *arr1,int *arr2,int *arr3,int n1,int n2,int n3){
	int dif=INT_MAX;
	int ii=0,jj=0,kk=0;
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			for(int k=0;k<n3;k++){
				int mini=min(arr1[i],min(arr2[j],arr3[k]));
				int maxa=max(arr1[i],max(arr2[j],arr3[k]));
				if( (dif>=(maxa-mini)) && ((arr1[ii]+arr2[jj]+arr3[kk])>(arr1[i]+arr2[j]+arr3[k])) ){
					ii=i;
					jj=j;
					kk=k;
					dif=maxa-mini;
				}

			}

		}
	}
	vector<int> vect;
	vect.push_back(arr1[ii]);
	vect.push_back(arr2[jj]);
	vect.push_back(arr3[kk]);
	sort(vect.begin(),vect.end());
	cout<<vect[2]<<" "<<vect[1]<<" "<<vect[0]<<endl;
}
void HappiestTrip_Opt(int *arr1,int *arr2,int *arr3,int n1,int n2,int n3){
	sort(arr1,arr1+n1);
	sort(arr2,arr2+n2);
	sort(arr3,arr3+n3);
	int i=0,j=0,k=0;
	int diff=INT_MAX;
	int ii=0,jj=0,kk=0;
	while( i<n1 && j<n2 && k<n3){
		int sum=arr1[i]+arr2[j]+arr3[k];
		
		int maxa=max(arr1[i],max(arr2[j],arr3[k]));
		int mini=min(arr1[i],min(arr2[j],arr3[k]));

		if(diff>(maxa-mini) ){
			diff=maxa-mini;
				ii=i;
				jj=j;
				kk=k;

		}else if(diff==(maxa-mini) && (arr1[ii]+arr2[jj]+arr3[kk])>(arr1[i]+arr2[j]+arr3[k])){
				
				diff=maxa-mini;
				ii=i;
				jj=j;
				kk=k;
				
		}
		
		if(mini==arr1[i])
			i++;
		else if(mini==arr2[j])
			j++;
		else k++;

		
	}
	
	vector<int> vect;
	vect.push_back(arr1[ii]);
	vect.push_back(arr2[jj]);
	vect.push_back(arr3[kk]);
	sort(vect.begin(),vect.end());
	cout<<vect[2]<<" "<<vect[1]<<" "<<vect[0]<<endl;	
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int n1,n2,n3;
		cin>>n1;
		n2=n1;
		n3=n1;
		int *arr1=new int[n1];
		int *arr2=new int[n2];
		int *arr3=new int[n3];
		for(int i=0;i<n1;i++)
			cin>>arr1[i];

		for(int i=0;i<n2;i++)
			cin>>arr2[i];

		for(int i=0;i<n3;i++)
			cin>>arr3[i];

		HappiestTrip_Opt(arr1,arr2,arr3,n1,n2,n3);
		// HappiestTrip(arr1,arr2,arr3,n1,n2,n3);
	}




return 0;}

