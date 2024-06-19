#include <iostream>
using namespace std;

class Area{
    private:
        float length;
        float breadth;
    public:
        //Area(float lenght, float breadth);
        void setDim(float len ,float bed){
            length = len;
            breadth = bed;
        }
        float getArea(){
            return length * breadth;
        }
      
};

int main(){
    Area area;
    float len;
    float bed;

    cout << "Enter the lenght: ";
    cin >> len;
    cout << "Enter the breadth: ";
    cin >> bed;

    area.setDim(len,bed);
    cout << "Area : " << area.getArea() << endl;

    return 0;

}