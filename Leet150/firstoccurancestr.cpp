#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle)
{
    if (needle.empty()) return 0;

    int n = haystack.size(), m = needle.size();

    for (int i = 0; i <= n - m; i++)
    {
        if (haystack.substr(i, m) == needle)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string haystack = "a";
    string needle = "a";
    cout << strStr(haystack, needle) << endl;
    return 0;
}