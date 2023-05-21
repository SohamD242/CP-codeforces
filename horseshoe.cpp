#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        cin>>a[i];
    }
    unordered_set<int>s;
    s.insert(a[0]);
    s.insert(a[1]);
    s.insert(a[2]);
    s.insert(a[3]);
    if(s.size()==1)
    cout<<3<<endl;
    else if(s.size()==2)
    cout<<2<<endl;
    else if(s.size()==3)
    cout<<1<<endl;
    else
    cout<<0<<endl;
    
}