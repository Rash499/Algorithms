#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "The value of a is: " << a << endl;
    cout << "---------------------------------" << endl;
    cout << "The value of ++a is: " << ++a << endl;
    cout << "Now the value of a is: " << a << endl;

    cout << "---------------------------------"<< endl;
    cout << "The value of a++ is: " << a++ << endl;
    cout << "Now the value of a is: " << a << endl; 

    cout << "---------------------------------" << endl;
    cout << "The value of --a is: " << --a << endl;
    cout << "Now the value of a is: " << a << endl;

    cout << "---------------------------------" << endl;
    cout << "The value of a-- is: " << a-- << endl;
    cout << "Now the value of a is: " << a << endl;

    return 0;
}