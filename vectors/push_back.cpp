#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> myvector{1,2,3,4,5,};
    myvector.push_back(6);
    myvector.push_back(10);
    //vector becomes 1,2,3,4,5,6
    for(auto it = myvector.begin(); it != myvector.end(); ++it){
        cout << ' ' << *it;
    }
    
    myvector.pop_back();
    cout << endl;
    for(auto it = myvector.begin(); it != myvector.end(); ++it){
        cout << ' ' << *it;
    }
}