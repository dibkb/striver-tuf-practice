#include <iostream>
using namespace std;

/*
n=4
*
**
***
****
*****
 */

void patternTwo(int n);
int main(){
    patternTwo(4);
    return 0;
}

void patternTwo(int n){
    for (int i = 0; i<n; ++i){
        for (int j=0; j <= i; ++j){
            cout << "* ";
        }
        cout << endl;
    }
}
