#include<iostream>
using namespace std;

int adder(int n){
    if(n==0)
    return 0;
    else
    return n+adder(n-1);
}

int fadder(int n){
    if(n==0)
    return 1;
    return n*fadder(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<adder(n)<<endl;
    cout<<fadder(n)<<endl;
    
    return 0;

}