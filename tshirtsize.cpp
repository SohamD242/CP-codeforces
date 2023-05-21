#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        map<char, int> m{{'X', 1}, {'S', -50}, {'M', 100}, {'L', 500}};
        int a, b;
        a = 0;
        b = 0;
        for (int i = 0; i < s.size(); i++)
        {
            a += m[s[i]];
        }
        for (int i = 0; i < t.size(); i++)
        {
            b += m[t[i]];
        }
        if (a < 0 && b < 0)
        {
            a = a * (-1);
            b = b * (-1);
        }
        if (a == b)
        {
            cout << "=" << endl;
            continue;
        }
        if (a < b)
        {
            cout << "<" << endl;
        }
        else
            cout << ">" << endl;
    }
}
