#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s, t;
        string ans = "";
        cin >> s >> t;

        if (s[0] == t[0])
        {
            cout << "YES" << endl;
            cout << s[0] << "*" << endl;
        }
        else if (s.back() == t.back())
        {
            cout << "YES" << endl;
            cout << "*" << s.back() << endl;
        }
        else if (s[s.length() - 1] == t[t.length() - 1])
        {
            cout << "YES" << endl;
            cout << "*" << s[s.length() - 1] << endl;
        }
        else
        {

            for (int i = 0; i < s.length() - 1; i++)
            {
                for (int j = 0; j < t.length() - 1; j++)
                {
                    if ((s[i] == t[j]) && (s[i + 1] == t[j + 1]))
                    {
                        ans = "";
                        ans.push_back(s[i]);
                        ans.push_back(s[i + 1]);
                    }
                }
            }
            if (ans.length())
            {
                cout << "YES" << endl;
                cout << "*" << ans << "*" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}