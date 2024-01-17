// Program to sort this array using selection sort. Program should also find number of comparisons and number of swaps required.
// (Given an unsorted array of integers)

#include <iostream>
using namespace std;

void Solution(int arr[], int n)
{
    int swap = 0, comp = 0;
    int temp;
    int i, j, k;

    for (i = 0; i < n - 1; i++)
    {
        for (j = k = i + 1; j < n; j++)
        {
            comp++;

            if (arr[j] < arr[k])
                k = j;
        }

        temp = arr[i];
        arr[i] = arr[k];
        arr[k] = temp;
        swap++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Comparisions = " << comp << endl;
    cout << "Swaps = " << swap << endl;
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