#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

void pattern22(int n);

int main(){
    pattern22(9);
    return 0;
}

void pattern22(int n) {
    int core = n-1;
    for (int i = 0; i < 2*n-1; i++) {
        for (int j = 0; j < 2*n-1; j++) {
            int val = max(abs(core-i),abs(core-j));
            cout <<val+1<<" ";
        }
        cout << endl;
    }
}
