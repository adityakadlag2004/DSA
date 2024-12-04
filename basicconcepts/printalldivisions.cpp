#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> ls;

    for (int i = 0; (i*i) <= (n); i++)
    {
        if (n % i == 0)
        {
            cout << " Divisors = " << i << endl;
            ls.push_back(i);
            if (i != n / i)
            {
                cout << " Divisors = " << n / i << endl;
                ls.push_back(n / i);
                }
                }
                
        }
        cout << " Total Divisors = " << ls.size() << endl;
        sort(ls.begin(),ls.end());
    
    return 0;
}