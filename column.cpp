#include <iostream>
using namespace std;
int main () {
    int a[3][3],i,j;
    cout << "enter elements of array:";
    for(i=0 ; i<3 ;i++) {
        for(j=0 ; j<3 ;j++) {
            cin >> a[i][j];
        }
    }
    cout << "column major order is:" ;
    for(j=0 ; j<3 ; j++) {
        for(i=0 ; i<3 ; i++) {
            cout << a[i][j] << " ";
        }
    }
    return 0;
}