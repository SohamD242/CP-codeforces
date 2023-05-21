#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n % 2 == 0)
        cout<<"YES"<<endl;
        else if(n%2!=0 && k%2!=0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
}
