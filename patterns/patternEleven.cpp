/*
1

0 1

1 0 1

0 1 0 1

1 0 1 0 1
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
         int start = (i)%2;
         for (int j=0; j < i;++j){
             cout <<(start++)%2<<" ";
         }
         cout <<endl;
     }
 }
