#include <bits/stdc++.h>

using namespace std;


int Median(int *arr1,int *arr2,int size){
	int i=0,j=0,k=0,last,secondlast,flag=0;
	while( ( i<size ) &&  ( j<size ) ){
		
		if( k==( (size/2)+1) ){
			flag=1;
			break;
		}

		if( (arr1[i] < arr2[j])  ){
			secondlast=last;
			last=arr1[i];
			i++;
		}else{
			secondlast=last;
			last=arr2[j];
			j++;
		}
		k++;
	}
	if(!flag){
		while(i<size){
			if( (k==(size/2)+1) ){
				flag=1;
				break;
			}
			secondlast=last;
			last=arr1[i];
			i++;k++;
		}

		while(j<size){
			if( (k==(size/2)+1) ){
				flag=1;
				break;
			}
			secondlast=last;
			last=arr2[j];
			j++;k++;
		}
	}

	if( ((size%2) ==0) ){//Even Element
		return ((secondlast+last)/2);
	}else{
		return last;
	}
}

int main(){
	int arr1[]={10,20,30,40,50};
	int arr2[]={15,25,35,45,55};
	int size=sizeof(arr1)/sizeof(int);
	cout<<Median(arr1,arr2,(2*size) )<<endl;

return 0;}