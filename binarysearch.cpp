#include <iostream>
using namespace std;
int main() {
    int a[50] , n, key , low , mid , high ,i ;
    cout << "enter number of elements";
    cin >> n;
    cout << "enter elements of array";
for(i = 0 ; i<n ; i++) {
    cin >> a[i];
}
    cout <<"enter the element to be found";
    cin >> key;

    low = 0;
    high = n-1;

    while ( low <= high) 
    { 
       mid = (low + high) /2 ;  
            if(a[mid] == key){
                cout << "element found at position:" << mid+1 << endl;
            return 0;
        }
        else if(a[mid] < key ){
            mid = low + 1;
        }
        else {
            mid = high - 1;
        }
    }
cout << "element not found";

return 0;
}