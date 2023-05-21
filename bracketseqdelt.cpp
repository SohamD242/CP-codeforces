//https://youtube.com/watch?v=zgaKKpETRz8&feature=shares
//refer this vid to understand the code
#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    
    int t, n, i, j, c, r, f;
    string s;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        cin>>s;
        
        c=r=0;
        
        for(i=0; i<n;){
            if(s[i]=='('){
                if(i==n-1){
                    r++;
                    i++;
                }else{
                    c++;
                    i+=2;
                }
            }else{
                f=0;
                
                for(j=i+1; j<n; j++){
                    if(s[j]==')'){
                        f++;
                        c++;
                        i=j+1;
                        break;
                    }
                }
                if(f==0){
                    r=n-i;
                    i=n;
                }
            }
            
        }
        
        cout<<c<<" "<<r<<"\n";
    }
}