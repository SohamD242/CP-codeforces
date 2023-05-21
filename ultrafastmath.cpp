#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b;
    for (int i = 0; i < b.length(); i++)
    {
        if(a[i] == b[i])
        {
            b[i] = '0';
        }
        else
        {
            b[i] = '1';
        }
    }
    cout<<b<<endl;
    
    return 0;
    
}