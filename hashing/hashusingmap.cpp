#include<iostream>
#include<map>
using namespace std;

//map properties
//1. map is a container in C++ that stores elements in a key-value pair.
//2. map is an associative container, meaning that it stores elements in a way that they can
//   be accessed by a key.
//3. map is a sorted container, meaning that the elements are stored in a sorted order.
//4. map is a dynamic container, meaning that it can grow or shrink as elements are added
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        }

    map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
        }
        for(auto it=mpp.begin();it!=mpp.end();it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
            }
}