#include <iostream>
using namespace std;

class A{
    protected:
        int a;

    public:
        void set_A(){
            cout << "Enter the value fo A = ";
            cin >> a;
        }
        void disp_A(){
            cout << endl << "Value of A = " << a;
        }
};

class B : public A{
    protected:
        int b;
    public:
        void set_B(){
            cout << "Enter the value of B = ";
            cin >> b;
        }
        void disp_B(){
            cout << endl << "Value of B = "<<b;
        }
};

class C: public B{
    int c,p;

    public:
        void set_C(){
            cout << "Enter the value fo C = ";
            cin >> c;
        }

        void disp_C(){
            cout << endl << "Value of C = " <<c;
        }
        void cal_product(){
            p = a*b*c;
            cout << endl<<"Product of "<<a<<" * "<<b<<" * "<<c<<" = "<<p;

        }
};

int main(){
    C c;
    c.set_A();
    c.set_B();
    c.set_C();
    c.disp_A();
    c.disp_B();
    c.disp_C();
    c.cal_product();

    return 0;
}
