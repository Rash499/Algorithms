#include <iostream>
using namespace std;

class Vehicle {
    public:
        Vehicle(){
            cout << "This is a Vehicle\n";
        }
};

//first sub class
class Car : public Vehicle{

};

//second sub class
class Bus : public Vehicle{

};

int main(){
    //creating object of sub class will
    //invoke the constructor of base class
    Car obj1;
    Bus obj2;
    return 0;
}