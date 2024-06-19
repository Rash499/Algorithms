#include <iostream>
using namespace std;

class student{
    int rno;
    char name[50];
    double fee;
    public:
        student(){
            cout << "Enter roll number: ";
            cin >> rno;
            cout << "Enter the name: ";
            cin >> name;
            cout << "Enter the fee: ";
            cin >> fee;
        }

        void display(){
            cout << rno << "\t" << name << "\t" << fee;
        }
};

int main(){
    student s;
    s.display();
    return 0;
}