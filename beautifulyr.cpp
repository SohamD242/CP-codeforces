#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=n+1; i<=10000; i++)
    {
        string str=to_string(i);
        set<int>s(str.begin(), str.end());
        if(str.size()==s.size())
        {
            cout<<i<<endl;
            break;
        }
    }

}