#include <iostream>
using namespace std;

void pattern18(int n);
void pattern18reverse(int n);
int main(){
    pattern18(20);
    pattern18reverse(20);
    return 0;
}

void pattern18(int n) {
    int cols = 2*n;
    for (int i=0; i <n; ++i){
        int space = 2*i;
        int stars = cols - space;
        for (int j=0;j < stars/2;++j){
            cout<<"*";
        }
        for (int j=0;j < space;++j){
            cout<<" ";
        }
        for (int j=0;j < stars/2;++j){
            cout<<"*";
        }
        cout <<endl;
    }
}
void pattern18reverse(int n) {
    int cols = 2*n;
    for (int i=n-1; i >=0; --i){
        int space = 2*i;
        int stars = cols - space;
        for (int j=0;j < stars/2;++j){
            cout<<"*";
        }
        for (int j=0;j < space;++j){
            cout<<" ";
        }
        for (int j=0;j < stars/2;++j){
            cout<<"*";
        }
        cout <<endl;
    }
}
