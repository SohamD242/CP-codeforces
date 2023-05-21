#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        int mx=0;
        int s=0,d=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            mx=max(a[i],mx);
            if(a[i]==0)
            s++;
            else
            d++;
        }
        
        if(s==n)
        cout<<"1"<<endl;
        else if(s<=(d+1))
        cout<<"0"<<endl;
        else
        {
            if(mx==1)
            cout<<"2"<<endl;
            else
            cout<<"1"<<endl;
        }


        

        
    }
}