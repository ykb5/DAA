// Program to find whether given key element is present in the array or not. Also, find total number of comparisons.

#include <iostream>
using namespace std;

void lsearch(int arr[], int key, int n)
{
    int i, count = 0, flag = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            cout << "Present " << i + 1 << endl;
            break;
        }
        count++;
    }

    if (flag == 0)
        cout << "Not Present " << count << endl;
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
        
        lsearch(arr, key, n);

        t--;
    }
}