
//constructors are special class members which are called by the complier every time 
 //on object of that class is instantiated

#include <iostream>
using namespace std;

class MyClass{
    public:
        int id;

        //default constructor
        MyClass(){
            cout << "Default constructor called" << endl;
            id = -1;
        }
    
};

int main(){
    MyClass obj1;
    cout << "ID is " << obj1.id << endl;

    return 0;
}