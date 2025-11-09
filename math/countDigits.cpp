#include <iostream>
using namespace std;

int countDigits(int n);

int main(){
    cout <<countDigits(3);
    return 0;
}

int countDigits(int n) {
    if(n==0) return 0;
    int count{0};
    while(n){
        n/=10;
        ++count;
    }
    return count;
}
