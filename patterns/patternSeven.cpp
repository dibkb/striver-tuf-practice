/*
   *
  ***
 *****
*******
*********
 */


#include <iostream>
using namespace std;

void printPattern(int n);

int main(){
    printPattern(4);
    return 0;
}

void printPattern(int n){
    int m = 2*n -1;
    for (int i = 0; i < n; ++i){
        int stars = 2*(i)+1;
        int spaces = (m - stars)/2;
        for (int i =0; i < spaces; ++i){
            cout <<" ";
        }
        for (int i =0; i < stars; ++i){
            cout <<"*";
        }
        for (int i =0; i < spaces; ++i){
            cout <<" ";
        }
        cout <<endl;

    }
}
