#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
        {
            cout << 0;
            continue;
        }

        if (s[i] == '-' && s[i + 1] == '.')
        {
            cout << 1;
            ++i;
            continue;
        }

        if (s[i + 1] == '-' && s[i + 1] == '-')
        {
            cout << 2;
            ++i;
            continue;
        }
    }

    return 0;
}