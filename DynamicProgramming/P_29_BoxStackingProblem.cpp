#include<bits/stdc++.h>
using namespace std;
static auto _____ = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
struct Box{
	int w;
	int l;
	int h;
};

bool compare(Box b1,Box b2){
	return (( (b1.w) * (b1.l) )>( (b2.w) * (b2.l) ));
}

int MaxHeight(vector<Box> &vect){
	sort(vect.begin(),vect.end(),compare);
	

	vector<int> maxheight(vect.size());
	// Initialize to default heights
	for(int i=0;i<vect.size();i++)
		maxheight[i]=vect[i].h;
	// Similer to LIS now
	int maximum=maxheight[0];
	for(int i=1;i<vect.size();i++){
		for(int j=0;j<i;j++){
			if(vect[j].w > vect[i].w && vect[j].l > vect[i].l){
				maxheight[i]=max(maxheight[i],maxheight[j]+vect[i].h );
				if(maximum<maxheight[i])
					maximum=maxheight[i];
			}
		}
	}
	
	return maximum;
}

int main(){

	int tc;
	cin>>tc;
	while(tc--){
		
		int size;
		cin>>size;
		vector<Box> vect;
		for(int i=0;i<size;i++){
			int w,h,l;
			cin>>l>>w>>h;
			
			int ll=l,ww=w,hh=h;
			if(ll<ww)swap(ll,ww);
			Box b1={ll,ww,hh};

			 ll=w,ww=h,hh=l;
			if(ll<ww)swap(ll,ww);
			Box b2={ll,ww,hh};

			 ll=h,ww=l,hh=w;
			if(ll<ww)swap(ll,ww);
			Box b3={ll,ww,hh};
			vect.push_back(b1);
			vect.push_back(b2);
			vect.push_back(b3);

		}
		cout<<MaxHeight(vect)<<endl;


	}








return 0;}