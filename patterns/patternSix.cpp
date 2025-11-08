/*
12345
1234
123
12
1
 */

 #include <iostream>
 using namespace std;

 void printPattern(int n);

 int main(){
     printPattern(4);
     return 0;
 }

 void printPattern(int n){
     for (int i = 0; i < n; ++i){
         for (int j = 0; j < n-i; ++j){
             cout <<j+1<<" ";
         }
         cout<<endl;
     }
 }
