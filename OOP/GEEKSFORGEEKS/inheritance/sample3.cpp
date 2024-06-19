#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

//base class
class Parent{
    public:
        int id_p;
};
//sub class inheriting from the base
class Child : public Parent{
    public:
        int id_c;
};

int main(){
    Child obj1;
    //An object of class child has all data members
    //and member functions of classs parent

    obj1.id_c = 7;
    obj1.id_p = 32;

    cout << "Child id is: " << obj1.id_c << endl;
    cout << "Parent id is: " << obj1.id_p << endl;
    return 0;
}

