// Program to find three indices i, j, k such that arr[i] + arr[j] = arr[k].
// (Given a sorted array of positive integers)

#include <iostream>
using namespace std;

void solution(int arr[], int n)
{

    for (int i = 0; i < n; i++)

        for (int j = i + 1; j < n; j++)

            for (int k = j + 1; k < n; k++)

                if (arr[i] + arr[j] == arr[k])
                {

                    cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
                    return;
                }

    cout << "No sequence found" << endl;
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

        solution(arr, n);
        t--;
    }
}