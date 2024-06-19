#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Myclass{
    public:
        //function with 1 int parameter
        void func(int x){
            cout << "Value of X: " << x << endl;
        }
        //function with same name and 1 double parameter
        void func(double x){
            cout << "Value of X: " << x << endl;
        }
        //function with same name with and two parameters
        void func(int x,int y){
            cout << "Value of x and y: " << x << ',' << y << endl;
        }

};
int main(){
    Myclass obj1;
    obj1.func(45);
    obj1.func(34.5656);
    obj1.func(67,12);

    return 0;
}



