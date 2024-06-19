#include <iostream>
#include <string.h>

using namespace std;


void search(string &txt, string &pat){
    int M = pat.size();
    int N = txt.size();

    for(int i =0; i <= N-M; i++){
        int j;

        for(j=0; j < M; j++){
            if(txt[j+i] != pat[j]){
                break;
            }
        }
        if(j == M){
            cout << "Pattern found at index: " << i << endl;
        }
    }
}
int main(){

    string txt1 = "AAABDJHASJHAABBJKJWHAAB";
    string pat1 = "HAAB";
    search(txt1, pat1);

}