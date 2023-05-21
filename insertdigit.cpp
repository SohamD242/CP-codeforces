#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int d; cin>>d;
        string str,ans="";
        cin>>str;
        int j=-1;
        for(int i=0; i<n; i++)
        {
        
            if((str[i]-'0')<d){
               ans+= '0'+d;
               j=i;
               break;
            }
           ans+= str[i];
            
           
        }
        if(j==-1){
            ans+='0'+d;
        }
        else{
            for (int i = j; i < n; i++)
            {
                ans+=str[i];
            }
            
        }
        cout<<ans<<endl;

    }
}