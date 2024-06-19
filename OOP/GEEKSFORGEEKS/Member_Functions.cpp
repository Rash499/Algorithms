#include <iostream>
using namespace std;

class MyClass{

    public:
        string name;
        int id;

        void printName();
        void printID(){
            cout << "ID is: " << id << endl;
        
        }

};

void MyClass::printName(){
    cout << "Name is: " << name << endl;
}

int main(){
    MyClass obj1;
    obj1.id =10101;
    obj1.name = "WDHWPIHIP";
    obj1.printID();
    obj1.printName();

    return 0;
}