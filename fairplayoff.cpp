#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1, x2, x3, x4;
        cin >> x1 >> x2 >> x3 >> x4;
        int c1 = max(x1, x2);
        int c2 = max(x3, x4);
        if ((c1 > c2) && (c2 > x1 || c2 > x2))
            cout << "YES" << endl;
        else if ((c2 > c1) && (c1 > x3 || c1 > x4))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}