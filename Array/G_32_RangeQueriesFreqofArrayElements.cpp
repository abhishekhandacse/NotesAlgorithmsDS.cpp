// C++ program to find total count of an element
#include<bits/stdc++.h>
using namespace std;
 
unordered_map< int, vector<int> > store;

unordered_map< int, vector<int> > ::iterator it;
 
// Returns frequency of element in arr[left-1..right-1]
int findFrequency(int arr[], int n, int left,
                      int right, int element)
{
    // Find the position of first occurrence of element
   


    int a = lower_bound(store[element].begin(),
                        store[element].end(),
                        left)
            - store[element].begin();
 
    // Find the position of last occurrence of element
    int b = upper_bound(store[element].begin(),
                        store[element].end(),
                        right)
            - store[element].begin();
 
    return b-a;
}
 
// Driver code
int main()
{
    int arr[] = {2, 8, 6, 9, 8, 6, 8, 2, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect(arr,arr+n);
    vector<int> ::iterator it1;
    it1=lower_bound(vect.begin(),vect.end(),11);

    cout<<endl<<it1-vect.begin()<<endl<<endl;
    // cout<<endl<<vect.size();
    // cout<<endl<<lower_bound(vect.begin(),vect.end(),6)<<endl;

    // Storing the indexes of an element in the map
    for (int i=0; i<n; ++i)
        store[arr[i]].push_back(i+1); //starting index from 1
 
    for(it=store.begin();it!=store.end();it++)
        cout<<it->first<<endl;


    cout<<"--------------"<<endl;

    // Print frequency of 2 from position 1 to 6
    cout << "Frequency of 2 from 1 to 6 = "
         << findFrequency(arr, n, 1, 6, 2) <<endl;
 
    // Print frequency of 8 from position 4 to 9
    cout << "Frequency of 8 from 4 to 9 = "
         << findFrequency(arr, n, 4, 9, 8);
 
    return 0;
}