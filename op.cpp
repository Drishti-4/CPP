#include <iostream>
using namespace std;
int main () {
    int a,b;
    cout <<"enter the value of a";
    cin >> a;
    cout <<"enter the value of b";
    cin >> b;
    int sum = a+b;
    cout <<"sum = " << sum << endl;
    int diff = a-b;
    cout <<"difference = " << diff <<endl;
    int prod = a*b;
    cout << "product = " << prod << endl;
    int quo = a/b;
    cout << "quo = " << quo << endl;
    int rem = a % b;
    cout << "rem = " << rem << endl;
    return 0; 
}