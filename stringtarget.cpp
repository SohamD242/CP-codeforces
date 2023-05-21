#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
       string s;
       cin>>s;
       char m=s[0];
       int c=0;
       for (int i = 1; i < n; i++)
       {
        if(m>=s[i])
        {
            c=i;
            m=s[i];
        }
       }
       string str="";
       str=str+m;
       for (int i = 0; i < n; i++)
       {
        if(i!=c){
            str=str+s[i];
        }
       }

       cout<<str<<endl;
       
       
       
    }
}