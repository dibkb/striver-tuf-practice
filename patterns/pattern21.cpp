#include <iostream>
using namespace std;

void pattern21(int n);
int main(){
    pattern21(10);
    return 0;
}

void pattern21(int n) {
    for (int i=1;i <= n; ++i){
        if(i == 1 || i==n){
            for(int i=0; i< n; ++i){
                cout <<"*";
            }
        }else{
            cout <<"*";
            int cols = (n-2);
            for (int i=0; i < cols; ++i){
                cout <<" ";
            }
            cout <<"*";
        }
        cout<<endl;
    }
}
