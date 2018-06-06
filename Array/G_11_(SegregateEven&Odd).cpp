#include <bits/stdc++.h>

using namespace std;

void swap(int *a, int *b);
 
void segregateEvenOdd(int arr[], int size)
{
    /* Initialize left and right indexes */
    int left = 0, right = size-1;
    while (left < right)
    {
        /* Increment left index while we see 0 at left */
        while (arr[left]%2 == 0 && left < right)
            left++;
 
        /* Decrement right index while we see 1 at right */
        while (arr[right]%2 == 1 && left < right)
            right--;
 
        if (left < right)
        {
            /* Swap arr[left] and arr[right]*/
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}
 
/* UTILITY FUNCTIONS */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int N;
		cin>>N;
		int *arr=new int[N];
		for(int i=0;i<N;i++)
			cin>>arr[i];
		vector<int> even;
		for(int i=0;i<N;i++){
			if( (arr[i]%2) ==0)
				even.push_back(arr[i]);
		}
		vector<int> odd;
		for(int i=0;i<N;i++){
			if( (arr[i]%2) !=0)
				odd.push_back(arr[i]);
		}
		sort(even.begin(),even.end());
		sort(odd.begin(),odd.end());
		vector<int>::iterator it;
		for(it=even.begin();it!=even.end();it++){
			cout<<*it<<" ";
		}
		for(it=odd.begin();it!=odd.end();it++){
			cout<<*it<<" ";
		}
		cout<<endl;
		segregateEvenOdd(arr,N);
		for(int i=0;i<N;i++)
			cout<<arr[i]<<" ";
		
	}


return 0;}