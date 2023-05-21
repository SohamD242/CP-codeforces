#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int t; cin>>t;
    while(t--){

        int n; cin>>n;
        int a[n];
        int ma=INT_MIN;
        int mi=INT_MAX;
        for(int i=0; i<n;i++)
        {
            cin>>a[i];
            ma=max(ma,a[i]);
            mi=min(mi,a[i]);
        }

        int lmi=0,lma=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==ma)
            {lma=i+1;}
            if(a[i]==mi)
            {lmi=i+1;}
        }
        int rma=n-lma+1;
        int rmi=n-lmi+1;
        int a1=max(rma,rmi);
        int a2=max(lma,lmi); 

        int a3=min(lma+rmi,rma+lmi);
        
        cout<<min({a1,a2,a3})<<endl;
        
    }
}
