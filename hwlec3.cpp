#include <iostream>
using namespace std;
int main () {
    // int n,sum=0; 
    int n, i=1 ,sum = 0;
    // cout <<"enter the number of terms" ;
    cout << "enter number of terms" ;
    cin >> n;
    // cin >> n;
    while ( i <= n) {
        if ( i % 2 != 0) {
            sum = sum + i;
        }
        i++;
    }

    // for (int i = 1; i <= n ; i++) {
    //     if ( i % 2 != 0) {
    //         sum = sum + i;
    //     }
    // }
    // cout << "sum of odd numbers upto " << n << " terms = " << sum << endl;
    // int n,prod = 1;
    // cout << "enter number of terms" ;
    // cin >> n;
    // for (int i = 1; i<= n; i++) {
    //     prod = prod * i;
    // }
    // cout << "factorial of " << n << "terms = " << prod << endl;
        cout << "sum of odd numbers upto " << n << " terms = " << sum << endl;
    
    return 0;
}