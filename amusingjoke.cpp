#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    string str=a+b;
    sort(str.begin(), str.end());
    sort(c.begin(), c.end());
    if(str==c)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    
}