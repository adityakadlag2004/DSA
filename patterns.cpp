#include <iostream>
using namespace std;

void pattern1(int size)
{
    /*
    *****
    *****
    *****
    *****
    *****
    */
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(int size)
{
    /*
     *
     **
     ***
     ****
     *****
     */
    int i, j;
    for (i = 0; i <= size; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (i = 0; i <= size; i++)
    {
        for (j = size; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int size)
{
    /*
    *****
    ****
    ***
    **
    *

    */
    int i, j;
    for (i = 0; i <= size; i++)
    {
        for (j = 0; j < size - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    /*
         *
        ***
       *****
      *******
     *********

    */
    int i, j, k, counter = 1;
    for (i = 0; i < n; i++)
    {
        // space loop
        for (j = n - i; j > 0; j--)
        {
            cout << " ";
        }

        // star loop
        for (k = 0; k < counter; k++)
        {
            cout << "*";
        }
        counter += 2;
        cout << endl;
    }
}

void pattern5(int n)
{
    /*

        *********
         *******
          *****
           ***
            *

    */
    int i, j, k, counter = 1;
    for (i = 0; i < n; i++)
    {
        // space loop
        for (k = 0; k < i; k++)
        {
            cout << " ";
        }
        // star loop
        for (j = 0; j < (n * 2) - counter; j++)
        {
            cout << "*";
        }

        counter += 2;
        cout << endl;
    }
}

void p8(int n)
{
    pattern4(n);
    pattern5(n);
}

void p10(int n)
{
    /*

*
**
***
****
*****
****
***
**
*


    */
    // outer loop
    for (int i = 0; i <= n * 2 - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void p11(int n)
{

    /*
    1
    01
    101
    0101
    10101

    */
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        start = (i % 2 == 0) ? 1 : 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void p12(int n)
{

    /*
    1       1
    12     21
    123   321
    1234 4321
    */
    int counter = 1;
    int j = 1;
    for (int i = 0; i < n; i++)
    {
        // number
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space
        for (int k = 0; k < 2 * n - counter; k++)
        {
            cout << " ";
        }
        for (int l = i; l > 0; l--)
        {
            cout << l;
        }
        cout << endl;
        counter += 2;
    }
}

void p13(int n)
{
    /*
    ABCDE
    ABCD
    ABC
    AB
    A
    */
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j < 'A' + (n - i); j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void p14(int n)
{
    /*
         A
        ABC
       ABCDC
      ABCDEDC
     ABCDEFEDC
    */
    int i, j, k, counter = 1;
    for (i = 0; i < n; i++)
    {
        // space loop
        for (j = n - i; j > 0; j--)
        {
            cout << " ";
        }

        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        // char loop
        for (k = 0; k < counter; k++)
        {
            cout << ch;
            ch = (k <= breakpoint) ? ++ch : --ch;
        }
        counter += 2;
        cout << endl;
    }
}

void p15(int n)
{
    /*
    E
    DE
    CDE
    BCDE
    ABCDE
    */
    // outer loop
    for (int i = 0; i < n; i++)
    {
        
        for(char j='E' - i;j<='E';j++){
            cout<<j;
        }
        cout<<endl;
    }
}


void p16(int n){

    //outer LOOP
    for(int i=0;i<n;i++){
        
        //star
        for(int j=0;j<(n-i);j++){
            cout<<"*";    
        }
        //space
        for(int s=0;s<(i*2);s++){
            cout<<" ";
        }
        //star
        for(int k=0;k<(n-i);k++){
            cout<<"*";    
        }
        cout<<endl;


    }
    int inis=8;
    for(int i=0;i<n;i++){
        //star
        for(int j=0;j<=i;j++){
            cout<<"*";    
        }
        //space
        for(int s=0;s<inis;s++){
            cout<<" ";
        }
        //star
        for(int k=0;k<=i;k++){
            cout<<"*";    
        }
        inis-=2;
        cout<<endl;

    }
}
int main()
{
    p16(5);
    cout << endl;

    return 0;
}