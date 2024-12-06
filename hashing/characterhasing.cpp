#include<iostream>
using namespace std;
int main()
{
    //charcter hashing
    int hash[26]={0};
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        hash[s[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            cout<<char(i+'a')<<" "<<hash[i]<<endl;
            }
            return 0;
}