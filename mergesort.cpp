#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int size = 1; size < n; size = 2 * size)
    {
        for(int left = 0; left < n; left = left + 2 * size)
        {
            int mid = left + size;
            int right = left + 2 * size;

            if(mid > n)
                mid = n;

            if(right > n)
                right = n;

            int i = left;
            int j = mid;
            int k = 0;

            int temp[right - left];
            while(i < mid && j < right)
            {
                if(a[i] <= a[j])
                {temp[k] = a[i];
                    i++;}
                else{
                    temp[k] = a[j];
                    j++;}

                k++;
            }
            while(i < mid)
            {
                temp[k] = a[i];
                i++;
                k++;
            }
            while(j < right)
            {
                temp[k] = a[j];
                j++;
                k++;
            }
            for(i = left, k = 0; i < right; i++, k++)
            {
                a[i] = temp[k];
            }
        }
    }

    cout << "Sorted array: ";

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}