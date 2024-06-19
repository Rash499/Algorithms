#include <iostream>
using namespace std;

class point {
    private:
        double x,y;

    public:
        //non default constructor 
        //default constructor
        point(double px, double py){
            x= px;
            y= py;
        }
};

int main(void){
    //define an array of size 
    //10 address of type point
    //this line cause error
    //point a[10];

    point b = point(5,6);
    return 0;
}