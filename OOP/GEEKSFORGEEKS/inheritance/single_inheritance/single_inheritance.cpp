#include <iostream>
using namespace std;

class A{
    protected:
        int a;

    public:
        void set_A(){
            cout << "Enter the value of A = ";
            cin >> a;
        }

        void disp_A(){
            cout << endl << "Value of A=" << a;
        }
};

class B : protected A{
    int b,p;
    public:
        void set_B(){
            set_A();
            cout << "Enter the value of B = ";
            cin >> b;
        }

        void disp_B(){
            disp_A();
            cout << endl << "Value of B = " << b;
        }

        void cal_product(){
            p = a*b;
            cout << endl << "Product of "<<a << " * " <<b << " = " << p;
        }
};

int main(){
    B obj;
    obj.set_B();
    obj.cal_product();
    return 0;
}
