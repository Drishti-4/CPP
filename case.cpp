#include <iostream>
using namespace std;
int main () {
    char a;
    cout <<"enter a letter" ;
    cin >> a;
    cout <<"entered letter = " << a << endl;
    if ( a >= 'A' && a <= 'Z') {
        cout << "given letter is uppercase" ;
    }
    else {
        cout << "given letter is lowercase" ;
    }
    return 0;-

}
