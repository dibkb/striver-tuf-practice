#include <iostream>
using namespace std;

void pattern(int n){
    for (int i = 1; i <= n; ++i){
        for(int j =0; j <i; ++j ){
            cout <<  char('A' + j);
        }
        cout <<endl;
    }
}
int main(){
    pattern(9);
    return 0;
}
