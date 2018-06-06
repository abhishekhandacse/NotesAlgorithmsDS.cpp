#include <iostream>
#include <map>
using namespace std;


int Find(int *parent,int i){
	if(parent[i]==-1)
		return i;
	return Find(parent,parent[i]);
}

void Union(int *parent,int x,int y){
	int xset=Find(parent,x);
	int yset=Find(parent,y);
	parent[xset]=yset;
}
bool DetectCycle(int Vertices,multimap<int,int> &hashmap){
	map<int,int>::iterator it;
	int *parent=new int[Vertices];
	for(int i=0;i<Vertices;i++){parent[i]=-1;}//memset is the fastest version of doing this
	for(it=hashmap.begin();it!=hashmap.end();it++){
		int x=Find(parent,it->first);
		int y=Find(parent,it->second);
		if(x==y)
			return true;
		Union(parent,x,y); 
	}
	return false;
}
int main(){
	int Vertices;
	multimap <int,int> hashmap;
	int U,V;
	cin>>Vertices;
	int Edges;
	cin>>Edges;
	for(int i=0;i<Edges;i++){
		cin>>U>>V;
		if(U<V){
			//hashmap[U]=V;
			hashmap.insert(make_pair(U,V));
		}else{
			//hashmap[V]=U;
			hashmap.insert(make_pair(V,U));
		}
	}
	cout<<DetectCycle(Vertices,hashmap);
return 0;}