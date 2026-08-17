#include <iostream>
using namespace std;
int main() {
    int a[50],n,key;
    cout << "enter the number of elements";
    cin >> n;
    cout << "enter the elements of array";
for(int i=0 ; i<n ; i++) {
    cin >> a[i];
}
     cout << "enter the element to found";
     cin >> key;
for(int i=0 ; i<n ; i++) {
    if (a[i] == key) {
        cout << "element found at position:" << i+1 << endl;
        return 0;
    }
}
   
        cout << "element not found";
return 0;
    
}