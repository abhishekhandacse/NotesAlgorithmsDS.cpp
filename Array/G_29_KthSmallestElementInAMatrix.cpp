#include <bits/stdc++.h>


using namespace std;




int kthSmallest(int mat[4][4],int n,int k){
	priority_queue<pair<int,pair<int,int> >,vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > > pq;

	
	for(int i=0;i<n;i++){
		
		pq.push(make_pair(mat[0][i],make_pair(0,i)));
	}

	for(int i=0;i<k;i++){
		int val=pq.top().first;
		pair<int,int> rc=pq.top().second;
		pq.pop();
		int nextval=(rc.first<(n-1))?mat[rc.first+1][rc.second]:INT_MAX;
		pq.push(make_pair(nextval,make_pair(rc.first+1,rc.second)));
	}
	return pq.top().first;
}

int main()
{
  int mat[4][4] = { {10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {25, 29, 37, 48},
                    {32, 33, 39, 50},
                  };
  cout << "7th smallest element is " << kthSmallest(mat, 4, 7-1);
  return 0;
}