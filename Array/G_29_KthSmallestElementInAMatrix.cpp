#include <bits/stdc++.h>


using namespace std;

bool comp(pair<int,pair<int,int>> p,pair<int,pair<int,int>> q){

		if(p.first<q.first)return true;
		else return false;
}


int kthSmallest(int mat[4][4],int n,int k){
	// MinHeap
    priority_queue<pair<int,pair<int,int> > > pq;
    // val , r, col
    
    for(int i=0;i<n;i++){
        pq.push(make_pair(mat[0,i],make_pair(0,i)));
    }
    
    // for(int i=0;i<k;i++){
    //     pair<int,pair<int,int>> p=pq.top();
    //     pair<int,int> rc=p.second;
    //     int nextval=(rc.first<(n-1))?mat[rc.first+1][rc.second]:INT_MAX;
    //     pq.pop();
    //     pair<int,int> temp2={rc.first+1,rc.second};
    //     pair<int,pair<int,int>> temp1={nextval,temp2};
    //     pq.push(temp1);
    // }
    
    // return pq.top();
    return -1;
}

int main()
{
  int mat[4][4] = { {10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {25, 29, 37, 48},
                    {32, 33, 39, 50},
                  };
  cout << "7th smallest element is " << kthSmallest(mat, 4, 7);
  return 0;
}