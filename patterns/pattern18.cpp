#include <iostream>
using namespace std;

void pattern18(int n);
int main(){
    pattern18(26);
    return 0;
}

void pattern18(int n) {
    for (int i=0;i < n; ++i){
        for(int j = n-i; j <=n; ++j){
            cout <<char('A'+j-1)<<" ";
        }
        cout<<endl;
    }
}
