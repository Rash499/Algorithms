#include <iostream>
using namespace std;

//base class
class Vehicle{
    public:
        Vehicle(){
            cout << "This is a Vehicle\n";
        }
};
//first sub class derived from class vehicle

class fourWheeler : public Vehicle {
    public:
        fourWheeler(){
            cout << "Objects with 4 wheels are vehicles\n";
        }
};

//sub class derived from the derived base class fourwheeler
class Car : public fourWheeler{
    public:
        Car(){
            cout << "Car has 4 wheels\n";
        }
};

int main(){
    Car obj;
    return 0;
}