#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int best,worst,cnt=0;
    cin>>best;
    worst=best;
    while(--n)
    {
        int b;
        cin>>b;
       
        if(b>best){
            best=b;
            cnt++;
        }
         if(b<worst){
            worst=b;
            cnt++;
        }
        
    }
    cout<<cnt<<"\n";
    return 0;
    

}