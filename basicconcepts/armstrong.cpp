// A armstrong number is a number that is equal to the sum of its own digits each raised to the power of
// 3.
// 153 is an example of an armstrong number
// Here is how to calculate it
// 1^3 + 5^3 + 3^3 = 1 +
// 125 + 27 = 153
// So, 153 is an armstrong number
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int dup = n;
    int sum = 0;
    while (n != 0)
    {
        int r = n % 10;
        n = n / 10;
        sum += (r * r * r);
    }
    cout<<"Sum = "<<sum<<endl;
    if (sum == dup)
    {
        cout << dup << " is an armstrong number";
    }
    else
    {
        cout << dup << " is not an armstrong number";
    }

    return 0;
}