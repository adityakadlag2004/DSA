#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no"<<endl;
    cin>>n;
    int lastno,count=0;
    cout<<"Count = "<<(int)(log10(n)+1)<<endl;
    while(n!=0 || n<0)
    {
        lastno = n%10;
        n = n/10;
        cout<<lastno;
        count++;
    }
    cout<<"\n"<<count;
    //Time Complexity is O(log10n)

    
    return 0;
}