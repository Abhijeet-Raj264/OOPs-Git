#include <iostream>
using namespace std;
class Base{
public:
    virtual void a(){
        cout<<"base\n";
    }
};
class D1:public Base{
   public:
   void a(){
    cout<< "derived1\n";
   }
};
class D2:public Base{
   public:
   void a(){
    cout<< "derived2\n";
   }
};
int main(){
    Base*baseptr = new D1;
    baseptr->a();
    return 0;
}