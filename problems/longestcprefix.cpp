#include<iostream>
#include<string.h>
using namespace std;


int lengthOfLastWord(string s) {
        int count=0;
        bool wf=false;
        if(s.length()==0)
        return 0;
        else{
            for(int i=s.length()-1;i>0;i--){
                if(s[i]!= ' '){
                    count++;
                    wf=true;
                    cout<<s[i]<<endl;
                }
                if(wf && s[i]==' '){
                    break;
                }
            }
        }
        return count;
    }

int main()
{
    string input="a";
    cout<<lengthOfLastWord(input)<<endl;
    return 0;
}    