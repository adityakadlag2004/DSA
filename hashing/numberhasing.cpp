#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of elements"<<endl;
    cin >> n ;
    int arr[n];
    
    int gs[1000000]={0};
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    //traverse in array 
    for(int i=0;i<n;i++){
        gs[arr[i]]++;
    }
    //traverse in hash
    for(int i=0;i<n;i++){
        if(gs[i]!=0){
            cout<<i<<" "<<gs[i]<<endl;
            }
    }

}