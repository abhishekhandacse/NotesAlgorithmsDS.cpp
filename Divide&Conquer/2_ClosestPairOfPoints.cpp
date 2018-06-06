#include <bits/stdc++.h>

using namespace std;

struct Point
{
	int x;
	int y;
};

int main(){
	vector<Point> vect;
	vect.push_back({1,2});
	vect.push_back({2,3});
	vect.push_back({5,6});
	vect.push_back({2,4});

	float min=FLT_MAX;
	int size=vect.size();
	for(int i=0;i<(size-1);i++){
		for(int j=i+1;j<size;j++){
			float dist=sqrt( ((vect[i].x)*(vect[j].x)) + ((vect[i].y)*(vect[j].y))  );
			if(dist>min)
				min=dist;
		}
	}
	cout<<min<<endl;
}