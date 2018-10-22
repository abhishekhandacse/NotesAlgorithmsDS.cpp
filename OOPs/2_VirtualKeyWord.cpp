#include<iostream>
using namespace std;
  
class Base
{
public:
    virtual void show() { cout<<" In Base \n"; }
};
  
class Derived: public Base
{
public:
    void show() { cout<<"In Derived \n"; }
};
  
int main(void){
    
    Base *bp = new Base();
    bp->show();  // RUN-TIME POLYMORPHISM
    return 0;
}
