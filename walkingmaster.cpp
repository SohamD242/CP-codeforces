#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int diff1=d-b;
        int diff2=c-a;
        int ans=abs(diff1-diff2)+diff1;
        if((d<b)||(a+diff1<c))
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
        
        
        
    }
}