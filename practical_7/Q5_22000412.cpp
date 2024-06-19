#include <iostream>
using namespace std;

class Employee {
private:
    double salary;
    int hoursOfWork;

public:
    void getInfo(double initialSalary, int workHours) {
        salary = initialSalary;
        hoursOfWork = workHours;
    }

    void AddSal() {
        if (salary < 500.0) {
            salary += 10.0;
        }
    }

    void AddWork() {
        if (hoursOfWork > 6) {
            salary += 5.0;
        }
    }

    void displaySalary() const {
        cout << "Final Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp;

    emp.getInfo(450.0, 7);
    emp.AddSal();
    emp.AddWork();
    emp.displaySalary();

    return 0;
}
