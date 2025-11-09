#include <iostream>
using namespace std;
bool isPerfect(int n) {
    int div{1};
    int sum{0};
    while(div*div < n){
        if(n%div == 0){
            int divTwo = n/div;
            if(divTwo != div && divTwo != n){
                cout <<" divTwo "<<divTwo;
                sum+=divTwo;
            }
            cout <<" div "<<div<<endl;
            sum+= div;
        }
        div++;
    }
    cout <<sum;
    return sum == n;
}
int main() {
	// your code goes here
	isPerfect(6);
}
