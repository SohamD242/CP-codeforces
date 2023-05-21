#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int m=0;
        for (int i = 1; i < n; i++)
        {
            m=max(m,a[i]*a[i-1]);
        }
        
        cout<<m<<endl;
    }
}