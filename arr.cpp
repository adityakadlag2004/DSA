#include<iostream>
using namespace std;


int fun1(int a, int b){
 return(a*b);
}

void fun2(string s){
 cout<<s<<endl;
}

void passedByRef(string &s,int &a){
    s="Aditya";
    a=22;
}

int main(){
string s="skldjfhbl";
int b=10;
int a[5]={1,5,3,5,3};
for(int i=0;i<5;i++){
    cout<<"Element  = "<<a[i]<<endl<<endl;
    cout<<"Add = "<<fun1(i,(i+i-2*4))<<endl;
}

fun2(s);

passedByRef(s,b);
fun2(s);
return 0;
}