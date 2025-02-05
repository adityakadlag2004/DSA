#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = low;
    int i = low, j = high;
    while (i < j)
    {
        while (arr[i] <= arr[pivot] && i <= high-1)
        {
            i++;
        }
        while (arr[j] >= arr[pivot] && j > low)
        {
            j--;
        }
        if (i < j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void QuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        QuickSort(arr, low, pivot - 1);
        QuickSort(arr, pivot + 1, high);
    }
}
int main()
{
    // unsorted Array
    int arr[] = {5, 2, 8, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    QuickSort(arr, 0, n - 1);
    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}