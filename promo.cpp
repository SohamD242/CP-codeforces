#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    long long sum[n];
    long long s=0;
    for(int i=0;i<n;i++)
    {
       s+=arr[i];
       sum[i]=s;
    }
    while(q--)
    {
       int x,y;
       cin>>x>>y;
       if(x==y)
       cout<<sum[x-1]<<endl;
       else
       cout<<sum[x-1] - sum[x-y-1]<<endl;
    }

    return 0;
}