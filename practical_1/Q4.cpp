#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age;
    char gender;
    double height;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your gender (M or F): ";
    cin >> gender;

    cout << "Enter your height (in meters): ";
    cin >> height;

    cout << "\nName: " << name << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "Gender: " << gender << endl;
    cout << "Height: " << height << " meters" << endl;

    return 0;
}
