// Program to find Kth smallest or largest element in the array. (Worst case Time Complexity = O(n))
// (Given an unsorted array of integers)

#include <iostream>
#include <random>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int i = start - 1;

    for (int j = start; j < end; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[end]);
    return i + 1;
}

int randomized_partition(int arr[], int start, int end)
{
    int range = end - start + 1;

    int i = (rand() % range) + start;

    swap(&arr[end], &arr[i]);

    return partition(arr, start, end);
}

int randomSelect(int arr[], int start, int end, int k)
{
    if (start == end)
    {
        return arr[start];
    }

    int pivot = randomized_partition(arr, start, end);
    int pivot_pos = pivot - start + 1;
    if (pivot_pos == k)
    {
        return arr[pivot];
    }

    else if (k < pivot_pos)
    {
        return randomSelect(arr, start, pivot - 1, k);
    }

    else
    {
        return randomSelect(arr, pivot + 1, end, k - pivot_pos);
    }
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
        cout << randomSelect(arr, 0, n - 1, key) << endl;
        t--;
    }

    return 0;
}