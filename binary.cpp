#include <iostream>
using namespace std;
int numB(int n) {
    int r , ans = 0 , pow = 1;
    while (n != 0) {
        r = n % 2;
        ans = ans + ( r * pow) ;
        pow = pow * 10;
        n = n / 2;
    }
    return ans;
}
int main () {
    cout << "binary form = " << numB(2)<< endl;
    return 0;
}