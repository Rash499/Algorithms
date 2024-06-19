#include <iostream>
using namespace std;

class Animal {
    public:
        string color  = "Balck";

};

class Dog : public Animal{
    public:
        string color = "Greay";
};

int main(){
    Animal d = Dog();
    cout << d.color;
}