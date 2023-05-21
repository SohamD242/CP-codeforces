#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
{
    int m; cin>>m;
    int a[m];
    int cnt=0;
    for(int i=1; i<=m; i++){
        cin>>a[i];
    } 
    for (int  i = 1; i <= m; i++)
    {
        if(a[i]<=i)
        {
            cnt=1;
            break;
        }
        else
        {
            cnt=0;
        }
    }
    if(cnt==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    
}
}