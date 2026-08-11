#include <iostream>
using namespace std;
int main () {
    int a[50] , n , pos;
    cout << "Enter number of elements in array: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> a[i];
    }
    cout << "Enter the position of the element to delete: ";
    cin >> pos;
    if (pos < 1 || pos > n) {
        cout << "Invalid position!" << endl;
    } else {
        for (int i = pos - 1; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--;
        cout << "The new array is: ";
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}