// Program to find whether the given key element is present in the array or not. If present, then also find the number of copies of given key.
// (Given a sorted array of positive integers containing few duplicate elements)

#include <iostream>
using namespace std;

void BinarySearch(int arr[], int key, int n)
{
    int c = 0;
    int s = 0, e = n;
    int mid = 0;
    while (s < e)
    {
        mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            int i = mid - 1;
            c++;
            while (i > 0)
            {
                if (arr[i] == arr[mid])
                    c++;
                else
                    break;
                i--;
            }
            i = mid + 1;
            while (i < n)
            {
                if (arr[i] == arr[mid])
                    c++;
                else
                    break;
                i++;
            }
            break;
        }

        else if(arr[mid] > key)
            e = mid - 1;

        else if(arr[mid] < key)
            s = mid + 1;
    }
    cout << arr[mid] << "-" << c << endl;
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
        BinarySearch(arr, key, n);
        t--;
    }
}