#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int x=n/3;  
        
        int y=n/3;
        if(n%3==1)
        {
           x++;
        }
        else if(n%3==2)
        {
            y++;
        }
        cout<<x<<" "<<y<<endl;
        
    }
    return 0;
}
