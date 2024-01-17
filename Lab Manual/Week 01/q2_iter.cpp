// Program to find whether given key element is present in the array or not. Also, find total number of comparisons for each input case.
// Using iterative approach

#include <iostream>
using namespace std;

int main()
{
    int n, key, i = 0, b = 0, c;

    cout << "\nEnter size of array: ";
    cin >> n;

    int arr[n];
    cout << "\nEnter the elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nEnter the value to find in array: ";
    cin >> key;

    int end = n - 1, st = 0;
    for (i = 0; i < n; i++)
    {
        int mid = (end + st) / 2;
        if (arr[mid] == key)
        {
            c++;
            b++;
            break;
        }
        else if (arr[mid] > key)
        {
            c++;
            end = mid - 1;
        }
        else
        {
            c++;
            st = mid + 1;
        }
        if (st > end)
        {
            break;
        }
    }
    if (b > 0)
        cout << "\nKey element found in " << c << " comparison.";
        
    else
        cout << "\nKey element not found.";

    return 0;
}