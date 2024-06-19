#include <iostream>
using namespace std;

class Base {
    public:
        virtual void who(){
            cout << "I'am Base\n";
        }
};

class Derived : public Base {
    public:
        void who(){
            cout << "I'am Derived\n";
        }
};

int main(){
    //part1

    //the virtual functio who() is called through the object
    //of the class. Since it will be resolved at compile-time,
    //so it can be inlined

    Base b;
    b.who();

    //part2

    //the virtual function is called throught a pointer,
    //so it cannot be inlined
    
    Base *ptr = new Derived();
    ptr->who();

    return 0;
}