#include<iostream>
#include<string>
using namespace std;

string revstr(string str, int s, int e){
    if(s>=e/2)
    return str;
    else{
        swap(str[s], str[e]);
        return revstr(str, s+1, e-1);
    }
}

int main()
{
    string str,str2;
    cout<<"Enter a string: ";
    cin>>str;
    int len=str.length();
    str2 = revstr(str,0,len-1); 
    cout<<"Reversed string: "<<str<<endl;
    //Palindrome check
    if(str==str2)
    cout<<"String is a palindrome"<<endl;
    else
    cout<<"String is not a palindrome"<<endl;
    return 0;
}

