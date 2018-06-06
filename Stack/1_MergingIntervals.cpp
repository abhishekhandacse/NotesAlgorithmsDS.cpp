#include <bits/stdc++.h>

using namespace std;

struct interval{
	int start;
	int end;
};
bool compare(interval i1,interval i2){
	return (i1->start) < (i2->start);
}

void mergeinterval(vect<interval> &vect){
	if(vect.size()==0)
		return;
	stack<interval> st;
	interval i=vect.front();
	st.push(i);
	vector<interval>::iterator it;
	it=vect.begin();
	it++;
	for(;it!=vect.end();it++){
		interval top=st.top();
		if( (top->second) > (it->first) ){
			st.pop();
			interval x;
			x->first=top->first;
			x->second=max( (top->second),(it->second) );
			st.push(x);
		}else{
			st.push(it);
		}
	}
	// Now print the stack 
	

}
int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int size;
		cin>>size;
		vector<interval> vect;
		int start,end;
		for(int i=0;i<size;i++){
			cin>>start>>end;
			interval it;
			it->first=first;
			it->second=second;
			vect.push_back(it);
		}
		sort(vect.begin(),vect.end(),compare);
		mergeinterval(vect);
	}
return 0;}