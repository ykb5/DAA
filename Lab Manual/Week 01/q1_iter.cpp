// Program to find whether given key element is present in the array or not. Also, find total number of comparisons.
// Using iterative approach

#include <iostream>
using namespace std;

int main()
{
    int n, key, c = 0, f = 0;

    cout << "\nEnter size of array: ";
    cin >> n;

    int arr[n];
    cout << "\nEnter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nEnter the value to find in array: ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        c++;
        if (arr[i] == key)
        {
            f++;
            break;
        }
    }
    if (f > 0)
        cout << "\nKey element found in " << c << " comparison.";
    else
        cout << "\nKey element not found.";

    return 0;
}