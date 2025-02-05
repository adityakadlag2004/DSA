#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    int temp[high - low + 1];
    int i = 0;
    while (left <= mid && right <= high)
    {
        if (arr[left] < arr[right])
        {
            temp[i] = arr[left];
            left++;
        }
        else
        {
            temp[i] = arr[right];
            right++;
        }
        i++;
    }
    while (left <= mid)
    {
        temp[i] = arr[left];
        left++;
        i++;
    }
    while (right <= high)
    {
        temp[i] = arr[right];
        right++;
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        arr[j + low] = temp[j];
    }
}

void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}
int main()
{
    int arr[] = {4, 3, 23, 65, 87, 34, 1, 43, 3, 6, 34, 78};
    int n = sizeof(arr) / sizeof(int);
    mergeSort(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        }
        return 0;
}