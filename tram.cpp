#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
     int capacity=0;
    int curr=0;
     while(n--)
    {
        int a,b;
        cin>>a>>b;
       
        curr=curr-a;
        curr=curr+b;
        if(curr>capacity)
        {
            capacity=curr;
        }

    }
    cout<<capacity<<endl;

    return 0;
    
}