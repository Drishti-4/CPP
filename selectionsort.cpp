#include <iostream>
using namespace std;
int main() {
    int a[10],n,temp;
    cout << "enter number of elements in an array";
    cin >> n;
    cout << "elements of array are";
    for(int i=0 ; i<n ; i++) {
        cin >> a[i];
    }

    for(int i=0 ; i<n ; i++) {
        int min=i ;
        for (int j=i+1 ; j<n ; j++) {
            if(a[j] < a[min]) {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min] ;
        a[min] = temp;
    }
    cout << "after sorting , array is" ;
    for (int i=0 ; i<n ; i++) {
        cout << a[i] << " " ;
    }
    return 0;
}