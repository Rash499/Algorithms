#include <iostream>
using namespace std;

int main() {
    const int arraySize = 5;
    int userValues[arraySize];
    cout << "Enter 5 integer values:\n";

    for (int i = 0; i < arraySize; ++i) {
        cout << "Value " << (i + 1) << ": ";
        cin >> userValues[i];
    }
    cout << "\nValues in forward order:\n";
    for (int i = 0; i < arraySize; ++i) {
        cout << userValues[i] << " ";
    }
    cout << "\nValues in reversed order:\n";
    for (int i = arraySize - 1; i >= 0; --i) {
        cout << userValues[i] << " ";
    }

    return 0;
}
