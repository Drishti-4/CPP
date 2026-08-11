#include <iostream>
using namespace std;
int main () {
    int a[50] , n , i ;
    cout << "Enter number of elements in array: ";
    cin >> n ;  
    cout << "Enter elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Array elements are: ";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}