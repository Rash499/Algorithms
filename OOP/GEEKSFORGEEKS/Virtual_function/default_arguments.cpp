#include <iostream>
using namespace std;

class Base{
    public:
        virtual void fun(int x = 0){
            cout << "Base::fun(), x = " << x << endl;
        }
};

class Derived : public Base{
    public:
        //this virtual function will take an argument
        //but haven't initialized yet
        virtual void fun(int x){
            cout << "Derived::fun(), x = " << x << endl;
        }
};

int main(){
    Derived d1; //constructor

    //Base class pointer which will
    //edit value in memory location of
    //Derived classconstructor
    Base *bp = &d1;
    bp->fun();
    //calling a derived class member function
    return 0;
}