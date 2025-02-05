#include<iostream>

void revArray(int arr[],int s,int e){
    int sp=s,ep=e;
    if(sp>ep/2) return;
    else{
    //swap arr sp and ep
    int temp = arr[sp];
    arr[sp] = arr[ep];
    arr[ep] = temp;
        sp++;
        ep--;
      revArray(arr,sp,ep);
    }
}

int main()
{
    int n;
    std::cout<<"Enter the number of elements in the array: ";
    std::cin>>n;
    int arr[n];
    std::cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    std::cin>>arr[i];
    //size of array is
    int size = sizeof(arr)/sizeof(arr[0]);
    revArray(arr,0,size-1);
    std::cout<<"Reversed array is: ";
    for(int i=0;i<size;i++)
    std::cout<<arr[i]<<" ";
    return 0;
}