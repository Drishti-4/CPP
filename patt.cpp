#include <iostream>
using namespace std;
int main () {
    int n ,i = 1 , j = 1;
        cout << "enter number of terms" ;
        cin >> n;
    for ( i = 1; i <= n ; i++) {
        for ( j = 1 ; j <= n ; j++) {
            cout << j;
        }
        cout << endl;
    }
        return 0;
}