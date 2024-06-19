#include <iostream>
using namespace std;

class Rectangle{
    private:
        double length;
        double width;
public :
    //constructor to initialize data members
    Rectangle(double len, double wid):length(len),width(wid){}

    //Member function to calculate area
    double calculateArea(){
        return length*width;
    }
};

int main(){
    Rectangle rect1(12.34,23.565); //creating objects for the rectangle class
    cout << "Area of the rectangle = " << rect1.calculateArea();
    //assign member function and data memebers

    return 0;
}