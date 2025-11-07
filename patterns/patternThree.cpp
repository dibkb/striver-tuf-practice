/*
 * Let's say for N = 5, the pattern should look like as below:
 1
 12
 123
 1234
 12345
 */
#include <iostream>
using namespace std;

/*
 * Let's say for N = 5, the pattern should look like as below:
 1
 12
 123
 1234
 12345
 */

void patternThree(int n);

int main(){
    patternThree(4);
    return 0;
}


void patternThree(int n){
    for (int i =0; i<n;++i){
        for (int j=0; j<=i; ++j){
            cout << j+1;
        }
        cout << endl;
    }
}
