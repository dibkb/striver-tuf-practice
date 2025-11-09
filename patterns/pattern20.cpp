#include <iostream>
using namespace std;

void pattern20(int n);
int main(){
    pattern20(10);
    return 0;
}

void pattern20(int n) {
    int cols = 2*n;
    for (int i=1; i <=n;++i){
        int spaces = cols -2*i;
        for(int j =0; j <i; ++j){
            cout <<"*";
        }
        for(int j =0; j <spaces; ++j){
            cout <<" ";
        }
        for(int j =0; j <i; ++j){
            cout <<"*";
        }
        cout <<endl;
    }
    // reverse;
    for (int i = 1;i<n;++i){
        int spaces = 2*i;
        for(int j = n-i; j>0; --j){
            cout <<"*";
        }
        for(int j = 0; j < spaces; ++j){
            cout <<" ";
        }
        for(int j = n-i; j>0; --j){
            cout <<"*";
        }
        cout <<endl;

    }
}
