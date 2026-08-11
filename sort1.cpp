#include<iostream>
using namespace std;
int main () {
    int a[10] , n , j , temp;
    cout << "enter the number of elements in the array" ;
    cin >> n;
    for ( int i = 0 ; i<n ; i++) 
    {
        cin >> a[i];
    }
    for ( int i=0 ; i<n ; i++) {
      temp = a[i] ;
      j = i-1;
    while (j >= 0 && a[j]>temp) {
        a[j+1] = a[j];
        j--;
    }  
    a[j+1] = temp;
    }
    for (int i = 0 ; i < n;i++) {
        cout<<a[i] << " ";
    }
 return 0;   
}