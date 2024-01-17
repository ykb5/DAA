// Program to find whether there are any duplicate elements in the array or not. (use sorting) (Time Complexity = O(n log n))
// (Given an unsorted array of positive integers)

#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1, n2 = right - mid;
    int leftArr[n1], rightArr[n2];

    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];

    for (int i = 0; i < n2; i++)
        rightArr[i] = arr[mid + i + 1];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        if (leftArr[i] <= rightArr[j])
            arr[k++] = leftArr[i++];

        else
            arr[k++] = rightArr[j++];
    }

    while (i < n1)
        arr[k++] = leftArr[i++];

    while (j < n2)
        arr[k++] = rightArr[j++];
}

void mergeSort(int arr[], int left, int right)
{
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

void Solution(int arr[], int n)
{
    int flag = 0;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;

        if (arr[i] == arr[j])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;
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