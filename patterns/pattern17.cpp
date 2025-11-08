#include <iostream>
using namespace std;
void pattern17(int n) {
    int totalCols = 2*n -1;
    for(int row=0; row < n; ++row){
        int cols = 2*row+1;
        int spaces = (totalCols-cols)/2;
        // space
        for (int i=0; i<spaces; ++i){
            cout <<" ";
        }
        for (int i=0; i<row; ++i){
            cout <<char('A'+ i);
        }
        for (int i=row; i>=0; --i){
            cout <<char('A'+ i);
        }
        // space
        for (int i=0; i<spaces; ++i){
            cout <<" ";
        }
        cout <<endl;
    }
};

int main(){
    pattern17(9);
    return 0;
}
