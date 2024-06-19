#include <iostream>
using namespace std;

int main() {
    int rows = 7;
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }
        for (int k = 1; k <= (rows - i); ++k) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
