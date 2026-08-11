#include <iostream>
using namespace std;
int main () {
  int n,sum = 0,i = 1;
  cout <<"enter the value of n";
  cin >> n;
  while (i <= n){
    sum = sum + i;
    i++;
  }
  cout << sum << endl;
    return 0;
}
