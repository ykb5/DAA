// Program to sort an array of elements by partitioning the array into two subarrays based on a pivot element such that one of the sub array holds values smaller than the pivot element while another sub array holds values greater than the pivot element. Pivot element should be selected randomly from the array. Program should also find number of comparisons and swaps required for sorting the array.
// (Given an unsorted array of integers)

#include <iostream>
using namespace std;

int compare = 0;
int swaps = 0;

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1, temp;

    for (int j = low; j <= high - 1; j++)
    {
        compare++;
        if (arr[j] <= pivot)
        {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            swaps++;
        }
    }

    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    swaps++;

    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    if (low >= high)
        return;

    int pivot = partition(arr, low, high);

    quickSort(arr, low, pivot - 1);
    quickSort(arr, pivot + 1, high);
}

void solution(int arr[], int n)
{
    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    cout << "Comparisions: " << compare << endl;
    cout << "Swaps: " << swaps << endl;

    compare = 0;
    swaps = 0;
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