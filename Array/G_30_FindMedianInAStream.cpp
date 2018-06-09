#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

// Copied From GFG
// Very Imp Questing *************

 
// max heap to store the higher half elements 
priority_queue<int> max_heap_left;
 
// min heap to store the lower half elements
priority_queue<int,vector<int>,greater<int> > min_heap_right;
 
// function to calculate median of stream 
void calculate_median(double x,double &median)
{
    /*  At any time we try to make heaps balanced and 
        their sizes differ by atmost 1. If heaps are 
        balanced,then we declare median as average of 
        min_heap_right.top() and max_heap_left.top()
        If heaps are unbalanced,then median is defined 
        as the top element of heap of larger size  */
      
    // case1(left side heap has more elements)
    if (max_heap_left.size() > min_heap_right.size())
    {
        if (x < median)
        {
            min_heap_right.push(max_heap_left.top());
            max_heap_left.pop();
            max_heap_left.push(x);
        }
        else
            min_heap_right.push(x);
 
        median = ((double)max_heap_left.top()
                +(double)min_heap_right.top())/2.0;
    }
 
    // case2(both heaps are balanced)
    else if (max_heap_left.size()==min_heap_right.size())
    {
        if (x < median)
        {
            max_heap_left.push(x);
            median = (double)max_heap_left.top();
        }
        else
        {
            min_heap_right.push(x);
            median = (double)min_heap_right.top();
        }
    }
 
    // case3(right side heap has more elements)
    else
    {
        if (x > median)
        {
            max_heap_left.push(min_heap_right.top());
            min_heap_right.pop();
            min_heap_right.push(x);
        }
        else
            max_heap_left.push(x);
 
        median = ((double)max_heap_left.top()
                 + (double)min_heap_right.top())/2.0;
    }
}
 
// Driver program to test above functions
int main(){
    int size;
    cin>>size;
    double *arr=new double[size];

   



    // stream of integers
    // double arr[] = {5, 15, 10, 20, 3};
    double median = 0;//stores the median 
     
    // size of stream
    int n = size;
     
    // reading elements of stream one by one
    for (int i=0; i < n; i++)
    {   cin>>arr[i];
        // calculating new median for each 
        // new element added to the stream
        calculate_median(arr[i], median);
        cout<<floor(median)<<endl;
        // cout << setprecision(1) << fixed << median << endl;
    }
    return 0;
}
