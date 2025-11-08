/*

*
**
***
****
*****
****
***
**
*

*/
#include <iostream>
using namespace std;


void pattern(int x);

int main(){
    pattern(2);
    return 0;
}

void pattern(int x){
    int rows = 2*x-1;
    for (int i = 1; i<= rows; ++i){
        int cols = i > x? 2*x -i:i;
        for (int j = 0; j < cols; ++j){
            cout <<"*";
        }
        cout <<endl;
    }
}
