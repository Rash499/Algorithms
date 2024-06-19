#include <iostream>
#include <cmath> //import the math header
using namespace std;

const float pi = 3.14;

int main() {
    float radius;
    cout << "Enter the radius: ";
    cin >> radius;
    float area = 4 * pi * pow(radius, 2);
    float volume = (4.0 / 3.0) * pi * pow(radius, 3);

    cout << "Area: " << area << " square units" << endl;
    cout << "Volume: " << volume << " cubic units" << endl;

    return 0;
}
