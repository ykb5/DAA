/* Program to find whether a given key element is present in the sorted array or not.
 * For an array arr[n], search at the indexes arr[0], arr[2], arr[4],. ,arr[2k] and so on.
 * Once the interval (arr[2k] < key < arr[ 2k+1] ) is found, perform a linear search operation from the index 2k to find the element key.
 * (Complexity < O(n), where n is the number of elements need to be scanned for searching): Jump Search
 */

#include <iostream>
#include <cmath>
using namespace std;

void jumpsearch(int arr[], int key, int n)
{
    int count = 0, flag = 0, m = sqrt(n), start = 0;

    while (arr[m] <= key && m < n)
    {
        count++;

        start = m;
        m += sqrt(n);

        if (m > n - 1)
            m = n;
    }

    for (int i = start; i < m; i++)
    {
        if (arr[i] == key)
        {
            count++;
            flag = 1;
            break;
        }
        count++;
    }

    if (flag == 1)
        cout << "present" << " no. of comparison : " << count << endl;

    else
        cout << "not found " << " no. of comparison : " << count << endl;
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

        int key;
        cin >> key;

        jumpsearch(arr, key, n);

        t--;
    }
}