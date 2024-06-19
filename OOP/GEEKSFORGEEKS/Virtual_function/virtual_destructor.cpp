#include <iostream>
using namespace std;

//deleting a derived class object using a pointer of base class
// type that has a non-virtual destructor results in undefined
//behavior.
//To correct this situation, the base class should be defined
//with a virtual destructor

class Base{
    public:
        Base(){
            cout << "Constructing base\n";
        }
        virtual ~Base(){
            cout << "Destructing base\n";
        }
        //without virtual destructor No "Destructing derived" prints
};

class Derived : public Base{
    public:
        Derived(){
            cout << "Constructing derived\n";
        }
        ~Derived(){
            cout << "Destructing derived\n";
        }
};

int main(){
    Derived *d = new Derived();
    //Base *b = d;
    //delete b;
    getchar();
    return 0;
}