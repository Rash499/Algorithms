#include <iostream>
using namespace std;
class test{
    public:
    test(){
        cout << "\n Constructor executed";
    }

    ~test(){
        cout << "\n Destructorexecuted";
    }
};
int main(){
    test t1,t2,t3,t4;
    return 0;
}