// Program to find whether given key element is present in the array or not. Also, find total number of comparisons for each input case.

#include <iostream>
using namespace std;

void BinarySearch(int arr[], int n, int key)
{
    int l = 0, h = n - 1, mid, flag = 0, count = 0;
    while (l <= h)
    {
        mid = (l + h) / 2;

        if (arr[mid] == key)
        {
            flag = 1;
            cout << "found at " << mid << endl;
            break;
        }

        else if(arr[mid] < key)
        {
            l = mid + 1;
            count++;
        }

        else
        {
            h = mid - 1;
            count++;
        }
    }

    if (flag == 0)
    {
        cout << " not found " << endl;
    }

    cout << "number of comparison : " << count << endl;
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

        BinarySearch(arr, n, key);

        t--;
    }

    return 0;
}