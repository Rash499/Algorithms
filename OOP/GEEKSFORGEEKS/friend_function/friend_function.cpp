#include <iostream>
using namespace std;

class base{
    private:
        int private_var;
    protected:
        int protected_var;
    public:
        base(){
            private_var = 10;
            protected_var = 99;
        }

        friend void friendFunction(base &obj);
};

void friendFunction(base &obj){
    cout << "Private variable: " << obj.private_var << endl;
    cout << "Protected variable: " << obj.protected_var << endl;
}

int main(){
    base object;
    friendFunction(object);
    return 0;
}