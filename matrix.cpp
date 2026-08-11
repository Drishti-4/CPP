#include <iostream>
using namespace std;
int main() {
    int a[3][3] , i,j;
    cout << "enter elements of array:" ;
    for (i=0 ; i<3 ; i++) {
        for (j=0 ; j<3 ; j++) {
            cin >> a[i][j];
        }
    }
    for(i=0 ; i<3 ;i++) {
        for (j=0 ; j<3 ; j++) {
            if(i==j) {
                cout << a[i][j] << ;
            }
            else {
                cout << "0";
            } 
        }
    }
    return 0;
}