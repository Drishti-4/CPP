#include <iostream>
using namespace std;
int main () {
    int s[30] , sum = 0 , avg = 0;
    cout << "Enter elements : ";
    for (int i = 0; i < 30; i++) {
        cin >> s[i];
        sum += s[i];
    }
    avg = sum / 30;
    cout << "Sum: " << sum << ", Average: " << avg << endl;
    return 0;
}