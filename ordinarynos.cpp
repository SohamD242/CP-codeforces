#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int cnt=0,start;
        
        for (int i = 1; i <= 9; i++)
        {
             start=i;
            while(start<=n){
                cnt++;
                start=start*10+i;
            }
        }
        cout<<cnt<<endl;
    }
}