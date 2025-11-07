#include <iostream>
using namespace std;

/*
 * Given an integer n.
 * You need to recreate the pattern given below for any value of N. Let's say for N = 5,
 * the pattern should look like as below:

 *****
 *****
 *****
 *****
 *****

 Print the pattern in the function given to you.
 */
void patternOne(int n);
int main(){
    patternOne(4);
    return 0;
}


void patternOne(int n){
    for (int i=0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cout << "* ";
        }
        cout << endl;
    }
}
