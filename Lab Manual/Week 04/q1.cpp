// Program to sort an array of elements by dividing the array into two subarrays and combining these subarrays after sorting each one of them. Program should also find number of comparisons and inversions during sorting the array.
// (Given an unsorted array of integers)

#include <iostream>
using namespace std;

int compare = 0;

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

        compare++;
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

void solution(int arr[], int n)
{
    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    cout << "Comparisions: " << compare << endl;
    compare = 0;
}

int main(void)
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