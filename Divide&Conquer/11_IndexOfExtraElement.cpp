#include <bits/stdc++.h>

using namespace std;


int findExtra(int arr1[], int arr2[], int n)
{
    int index = n;  // Initialize result
 
    // left and right are end points denoting
    // the current range.
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = (left+right) / 2;
 
        // If middle element is same of both
        // arrays, it means that extra element
        // is after mid so we update left to mid+1
        if (arr2[mid] == arr1[mid])
            left = mid + 1;
 
        // If middle element is different of the
        // arrays, it means that the index we are
        // searching for is either mid, or before
        // mid. Hence we update right to mid-1.
        else
        {
            index = mid;
            right = mid - 1;
        }
    }
 
    // when right is greater than left our
    // search is complete.
    return index;
}
 
// Driver code
int main()
{
    int arr1[]  =  {1,2};
    int arr2[] =  {1};
    int n = sizeof(arr2) / sizeof(arr2[0]);
 
    // Solve is passed both arrays
    cout << findExtra(arr1, arr2, n);
    return 0;
}