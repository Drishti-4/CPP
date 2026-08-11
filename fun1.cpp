#include <iostream>
using namespace std;
int sum (int n) {
    int s = 0;
    for (int i = 0 ; i<= n ; i++) {
        s = s + i;
    }
    return s;
}
int main () {
    int p;
    cout << "enter number of terms" ;
    cin >> p;
    cout << "the sum = " << sum(p) << endl;
    return 0;
}