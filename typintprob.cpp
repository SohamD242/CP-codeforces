#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    string s = "";
    for (int i = 1; i<=150; i++)
    {
        if (i % 3 == 0)
            s +='F';
        if (i % 5 == 0)
            s +='B';
    }

    for (int i = 0; i+n < s.length(); i++)
    {
        bool flag = true;
        for (int j=0; j<n; j++)
        {
            if (s[i+j] != str[j])
                 flag = false;
        }
        if (flag)
        {
            cout <<"YES"<< endl;
            return;
        }
    }
    cout <<"NO"<< endl;
    
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        solve();
}