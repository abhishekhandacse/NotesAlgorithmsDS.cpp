#include <bits/stdc++.h>

using namespace std;

int mergesort_aux(int *arr,int *size,int left,int right);
int merge(int *arr,int *temp,int left,int mid,int right);

int mergesort(int *arr,int size){
	int *temp=new int[size];//This would be the actual sorted array in the end

	int count= mergesort_aux(arr,temp,0,size-1);
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";

	cout<<endl;
	return count;
}
int mergesort_aux(int *arr,int *temp,int left,int right){
	int mid,inv_count=0;
	if(left<right){
		mid = left+((right-left)/2);
		inv_count=mergesort_aux(arr,temp,left,mid);
		inv_count+=mergesort_aux(arr,temp,mid+1,right);
		inv_count+=merge(arr,temp,left,mid,right);
	}
	return inv_count;
}

int merge(int *arr,int *temp,int l,int m,int r){
    int i, j, k,inv_count=0;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    int tem=0,count=0;
    while (i < n1 && j < n2){
        if (L[i] <= R[j])
        {   tem+=count;
            count=0;
            arr[k] = L[i];
            i++;
        }
        else
        {   count++;
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    if(count)
        tem+=count;
    if(i<n1){
        tem+=((n1-i-1)*(n2)) ;
    }

    while (i < n1)
    {   arr[k] = L[i];
        i++;
        k++;
    }
    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
	
    return tem;
}

int main(){
int arr[]={1,20,6,4,5};
int size=(sizeof(arr)/sizeof(int)) ;
cout<<mergesort(arr,size)<<endl;
return 0;}