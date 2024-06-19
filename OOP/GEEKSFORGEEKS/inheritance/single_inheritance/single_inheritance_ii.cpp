#include <iostream>
using namespace std;

class A{
    protected:
        int a;
    public:
        void set_A(int x){
            a=x;
        }
        void disp_A(){
            cout << endl << "Value of A = " << a;
        }
};

class B: public A{
    int b,p;
    public:
        void set_B(int x,int y){
            set_A(x);
            b=y;
        }

        void disp_B(){
            disp_A();
            cout << endl << "Value of B = " << b;
        }

        void cal_product(){
            p = a*b;
            cout << endl << "Product of " << a <<" * "<<b<<" = "<<p;
        }

};

int main(){
    B obj;
    obj.set_B(26,2);
    obj.cal_product();

    return 0;
}