#include<iostream>

using namespace std;

int partition(int arr[],int low,int high)
{
    int pivot = arr[low];
    int i=low,j=high;
    while(i<=j){
        while(arr[i]<arr[pivot] && i <= high){
            i++;
        }
        while(arr[j]>arr[pivot] && j >= low){
            j--;
        }
       int temp = arr[i];
       arr[i] = arr[j];
       arr[j] = temp;
    }
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}
void QuickSort(int arr[],int low,int high)
{
    if(low<high){
        int pivot=partition(arr,low,high);
        QuickSort(arr,low,pivot-1);
        QuickSort(arr,pivot+1,high);
    }
}
int main(){
    //unsorted Array
    int arr[] = {5, 2, 8, 1, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr,0,n-1);
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
        return 0;
}