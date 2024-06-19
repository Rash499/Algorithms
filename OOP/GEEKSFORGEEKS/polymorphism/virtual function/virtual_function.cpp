#include <iostream>
using namespace std;

class Myclass_Base{
  public:
  //virtual function
    virtual void display(){
        cout << "Called virtual Base Class function\n\n";
    }  

    void print(){
        cout << "Called Myclass_Base print function\n\n";
    }
};

class Myclass_child : public Myclass_Base{
    public:
        void display(){
            cout << "Called Myclass_child Display Function\n\n";
        }

        void print(){
            cout << "Called Myclass_child print function\n\n";
        }
};

int main(){
    Myclass_Base * base; //create a reference of class Myclass_Base

    Myclass_child child;

    base = &child;

    base->Myclass_Base::display();
    //this will call the virtual function
    base->print();
    //this will call the non-virtual function
    return 0;
}