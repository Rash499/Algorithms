#include <iostream>
using namespace std;

class Myclass{
    private:
        int private_var;

    protected:
        int proteced_var;

    public:
        Myclass(){
            private_var = 10;
            proteced_var = 99;
        }

        //friend class declaration
        friend class F;
};
//class F is declared as a friend inside class Myclass
//Therefore, F is a friend of class Myclass.
//Class F can access the private members of class Myclass
class F{
    public:
        void display(Myclass &t){
            cout << "The value of private variable = " << t.private_var << endl;
            cout << "The value of protected variable = "<< t.proteced_var<<endl;

        }
};

int main(){
    Myclass obj;
    F fri;
    fri.display(obj);
    return 0;
}