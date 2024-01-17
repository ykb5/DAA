// Program to sort the array using insertion sort. Program should be able to find number of comparisons and shifts ( shifts - total number of times the array elements are shifted from their place) required for sorting the array.
// (Given an unsorted array of integers)

#include <iostream>
using namespace std;

void Solution(int arr[], int n)
{
    int shift = 0, comp = 0;
    int v, j;

    for (int i = 1; i < n; i++)
    {
        v = arr[i];
        j = i;

        while (arr[j - 1] > v && j >= 1)
        {
            shift++;
            comp++;

            arr[j] = arr[j - 1];
            j--;
        }
        shift++;

        arr[j] = v;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "comparisions = " << comp << endl;
    cout << "shifts = " << shift << endl;
}

int main()
{
    cout << "YogeshKumarBhatt_H_64" << endl;
    int t;

    cin >> t;
    while (t > 0)
    {
        int n;

        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        Solution(arr, n);

        t--;
    }
}