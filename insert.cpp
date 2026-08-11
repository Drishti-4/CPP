#include <iostream>
using namespace std;
int main () {
    int a[50] , n, p,i,key;
    cout<<"Enter number of elements in array: ";
    cin>>n; 
    cout << "enter the elements of array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout << "Enter the position where you want to insert an element: ";
    cin>>p;
    cout << "Enter the value to insert: ";
    cin>>key;   
    for (i=n;i>=p;i--) {
        a[i]=a[i-1];
    }
    a[p-1]=key;
    n++;
    cout << "Array after insertion: ";
    for (i=0;i<n;i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}