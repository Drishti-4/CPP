#include <iostream>
using namespace std;
int main() {
    int a[30] , sum = 0 , avg = 0;
    cout << "Enter elements : ";    
    for (int i = 0; i < 30; i++) {
        cin >> a[i];
        sum += a[i];
    }
    avg = sum / 30;
    cout << "Sum: " << sum << ", Average: " << avg << endl;
}