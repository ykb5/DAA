// Program to count the number of pairs of integers such that their difference is equal to a given key, K.
// (Given an array of non-negative integers)

#include <iostream>
#include <cstdlib>
using namespace std;

void solution(int arr[], int n, int key)
{
    int count = 0;

    for (int i = 0; i < n; i++)

        for (int j = i + 1; j < n; j++)

            if (abs(arr[i] - arr[j]) == key)
                count++;

    cout << count << endl;
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

        solution(arr, n, key);

        t--;
    }
}