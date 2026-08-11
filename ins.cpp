#include <iostream>
using namespace std;
int main ()
{
    int n, i, j, temp;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    cout << "Sorted array: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}