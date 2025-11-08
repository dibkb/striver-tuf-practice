/*
1        1
12      21
123    321
1234  4321
1234554321
 */

 #include <iostream>
 using namespace std;

 void printPattern(int n);

 int main(){
     printPattern(4);
     return 0;
 }

 void printPattern(int n){
     for (int i = 1; i <= n; ++i){
         for (int j = 0; j < i; ++j){
             cout <<j+1;
         }
         for (int j = 0; j < 2*(n-i); ++j){
             cout <<" ";
         }
         for (int j = i; j > 0; --j){
             cout <<j;
         }
         cout <<endl;
     }
 }
