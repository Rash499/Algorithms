#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int numbers[10];
    for(int i =0; i<10; i++){
        cout << "Enter number " << i+1 << " :";    
        cin >> numbers[i];    
    }
    sort(numbers, numbers + 10);
    cout << "\nSorted values in ascending order:\n";
    for (int i = 0; i < 10; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    cout << "\nSorted values in decending order:\n";
    for (int i = 9; i >= 0; i--) {
        cout << numbers[i] << " ";
    }

    return 0;
}