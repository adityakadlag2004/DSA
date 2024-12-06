#include<iostream>
using namespace std;

void adder(int n,int sum){
    int s = sum;
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    adder(n-1,sum+n);
 
   // return n;
}

int main(){
    adder(5,0);
    return 0;
}