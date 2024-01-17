// Program to find whether given key element is present in the array or not. Also, find total number of comparisons for each input case.
// Using recursive approach

#include <iostream>
using namespace std;

int binary_search(int arr[], int end, int st, int k)
{

    int mid = st + (end - st) / 2;

    if (st > end)
    {
        return 0;
    }
    else if (arr[mid] == k)
    {
        return 1;
    }
    else if (arr[mid] > k)
    {
        return (binary_search(arr, mid - 1, st, k));
    }
    else
    {
        return (binary_search(arr, end, mid + 1, k));
    }
}

int main()
{

    int n, k, i = 0, c;

    cout << "\nEnter size of array: ";
    cin >> n;

    int arr[n];
    cout << "\nEnter the elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nEnter the value to find in array: ";
    cin >> k;

    c = binary_search(arr, n - 1, 0, k);
    if (c > 0)
        cout << "\nKey element found.";

    else
        cout << "\nKey element not found.";

    return 0;
}