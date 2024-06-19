#include <iostream>
using namespace std;

class A {
    public:
        virtual void fun(){
            cout << "A::fun() is called" << endl;

        }
};

class B : public A{
    public:
        void fun(){
            cout << "B::fun() is called" << endl;
        }
};

class C : public B{
    public:
        void fun(){
            cout << "C::fun() is called" << endl;
        }
};

int main(){
    //An object of class C
    C c;

    //A pointer of class B pointing
    //to memory location of c
    B * b = &c;

    //this line prints "C::fun() called"
    b->fun();
    getchar(); //to get the next character
    return 0;
}

