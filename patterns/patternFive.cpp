/*
 *****
 ****
 ***
 **
 *
 */

 #include <iostream>
 using namespace std;

 void printPattern(int n);

 int main(){
     printPattern(5);
     return 0;
 }
 void printPattern(int n){
     for(int i = 0; i < n; ++i){
         for (int j = n; j > i; --j){
             cout << "*";
         }
         cout << endl;
     }
 }
