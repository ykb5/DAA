// Program to find whether given key element is present in the array or not. Also, find total number of comparisons.
// Using recursive approach

#include <iostream>
using namespace std;

int linerar_search(int arr[], int key, int i, int n)
{
    if (i > n)
        return 0;

    else if (arr[i] == key)
        return i + 1;

    else
        return (linerar_search(arr, key, i + 1, n));
}

int main()
{
    int n, key, i = 0;

    cout << "\nEnter size of array: ";
    cin >> n;

    int arr[n];
    cout << "\nEnter the elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    i = 0;

    cout << "\nEnter the value to find in array: ";
    cin >> key;

    int c = linerar_search(arr, key, i, n);
    if (c > 0)
        cout << "\nKey element found in " << c << " comparison.\n";

    else
        cout << "\nKey element not found.\n";

    return 0;
}