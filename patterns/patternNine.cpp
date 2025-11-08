/*
*
***
*****
*******
*********
*********
*******
*****
***
 *
 */

 #include <iostream>
 using namespace std;

 void pyramid(int n);
 void invertedPyramid(int n);
 void pattern(int n);

 int main(){
     pattern(4);
     return 0;
 }


 void pyramid(int n){
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


 void invertedPyramid(int n){
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

void pattern(int n){
    pyramid(n);
    invertedPyramid(n);
}
