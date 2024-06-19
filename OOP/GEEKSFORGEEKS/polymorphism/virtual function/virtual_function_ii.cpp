#include <iostream>
using namespace std;

class base{
    public:
        virtual void print(){
            cout << "print base class" << endl;
        }

        void show(){
            cout << "show base class" << endl;
        }
};

class derived : public base{
    public:
        //print() is already virtual function in derived class,
        //we could also declared as virtual void print() explicitly
        void print(){
            cout << "print derived class" << endl;
        }
        void show(){
            cout << "show derived class" << endl;
        }
};

int main(){
    base *bptr;
    derived d;
    bptr = &d;

    //virtual function, binded at runtime (runtime poly.)
    bptr->print();

    //non virtual function, binded at complie time
    bptr->show();
    return 0;
}