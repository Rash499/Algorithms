#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int numbers[3];
    for(int i=0; i < 3; i++ ){
        cout<<"Enter number " << i+1 << " :";
        cin >> numbers[i];
    }
    cout << max(numbers[2],max(numbers[0],numbers[1]));
}