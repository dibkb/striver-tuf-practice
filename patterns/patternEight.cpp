/*
*********
 *******
  *****
   ***
    *
 */

 #include <iostream>
 using namespace std;

 void printPattern(int x);
 int main(){
     printPattern(4);
     return 0;
 }

 void printPattern(int n){
     int m = 2*n-1;
     for (int row = 0; row < n; ++row){
         int space = row;
         int stars = m - 2*row;
         for (int x = 0; x < space; ++x){
             cout <<" ";
         }
         for (int x = 0; x < stars; ++x){
             cout <<"*";
         }
         for (int x = 0; x < space; ++x){
             cout <<" ";
         }
         cout <<endl;
     }
 }
