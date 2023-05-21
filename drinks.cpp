#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int A[n];
    double sum=0.0, ans=0.0;
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
        sum+=A[i];

    }
    ans = sum/n;
    cout<< fixed <<setprecision(12)<<ans<<endl;
    
    return 0;
    
}