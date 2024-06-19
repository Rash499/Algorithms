#include <iostream>
using namespace std;

class MyClass{
    public:
        string name;
        //data members
        void printName(){ //memeber function
            cout << "Name is: " << name << endl;
        }
};

int main(){
    MyClass obj1;
    obj1.name = ">HKVK>GL?";
    obj1.printName();

    return 0;
}