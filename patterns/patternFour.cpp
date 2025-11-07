/*
 n=5
 1
 22
 333
 4444
 55555
 */

 #include <iostream>
 using namespace std;

 void patternFour(int n);
 int main(){
     patternFour(5);
     return 0;
 }

 void patternFour(int n){
     for (int i=0; i<n; ++i){
         for (int j =0; j<=i; ++j){
             cout << i+1;
         }
         cout << endl;
     }
 }
