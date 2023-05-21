#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    string a;
    cin>>a;
    int cnt=0;
    int l=a.length();
    for (int i = 0; i < l; i++)
    {
        if(a[i] =='H'||a[i] =='Q'||a[i] =='9')
        cnt++;
    }
    if(cnt>0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    
}