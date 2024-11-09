#include<iostream>
using namespace std;
class Creation{
    public:
    static int count;
    public:
    static void setCount(){
        count=count+1;
    }        
};
int Creation ::count=0;
int main(){
    Creation obj1;
    Creation obj2;
    obj1.count=10;
    cout<<" "<<obj2.count;
    cout<<" "<<obj1.count;
}