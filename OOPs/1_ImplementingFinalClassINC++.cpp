#include<bits/stdc++.h>

using namespace std;

class Final;
class MakeFinal{
private:
	MakeFinal(){cout<<"MakeFinal Constr"<<endl;}
friend class Final;
};

// Makeing this class as final

class Final:virtual MakeFinal{
public:
	Final(){cout<<"Final Constr"<<endl;}
};

// Class inheriting a non inhertitable class

// class Derived : public Final{
// public:
// 	Derived(){cout<<"Derived Constr"<<endl;}
// };

int main(){

	// Derived d;
	Final f;

return 0;}