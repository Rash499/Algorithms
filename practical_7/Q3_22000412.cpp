#include <iostream>
#include <iomanip>
using namespace std;

class Employee {
public:
    string name;
    int yearOfJoining;
    string address;

    Employee(const string& empName, int year, const string& empAddress)
        : name(empName), yearOfJoining(year), address(empAddress) {}

    void displayInfo() const {
        cout << setw(10) << name << setw(8) << yearOfJoining << setw(20) << address << endl;
    }
};

int main() {
    
    Employee robert("Robert", 1994, "64C- WallsStreat");
    Employee sam("Sam", 2000, "68D- WallsStreat");
    Employee john("John", 1999, "26B- WallsStreat");

    cout << setw(10) << "Name" << setw(8) << "Year" << setw(20) << "Address" << endl;
    robert.displayInfo();
    sam.displayInfo();
    john.displayInfo();

    return 0;
}
