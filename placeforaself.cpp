#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        for (int i = 0; i < m; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            if (c < 0)
            {
                cout << "NO" << endl;
                continue;
            }
            double x = b + (double)2*sqrt(a * c);
            int max = ceil(x);
            auto k = s.lower_bound(max);
            if (k == s.begin())
            {
                cout << "NO" << endl;
               
            }
            else
            {
                double y = b - (double)2 * sqrt(a * c);
                int min = floor(y);

                k--;
                if (*k <= min)
                    cout << "NO" << endl;
                else
                {
                    cout << "YES" << endl;
                    cout << *k << endl;
                }
            }
        }
    }
}