#include <iostream>
using namespace std ;
int numD(int n) {
    int r , ans = 0 , pow = 1;
    while ( n != 0) {
        r = n % 10;
        ans = ans + ( r * pow) ;
        pow = pow * 2;
        n = n / 10;
    }
    return ans;
}
int main () {
    cout << " decimal form is = " << numD(100) << endl;
    return 0;
}