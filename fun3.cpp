#include <iostream>
using namespace std;
int sumD(int n) {
    int r, s = 0;
    while (n != 0) {
        r = n % 10;
        s = s+r;
        n = n / 10;
    }
    return s;
   
}
int main () {
    cout << "sum of digits = " << sumD(2356) << endl;
    return 0; 
}

