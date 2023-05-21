#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k;
   cin>>n>>k;
   string s,t;
   cin>>s>>t;
   int test=1;
   for(int i=0;i<n;i++)
   {
      if(i-k<0 && i+k>=n)
      {
         if(s[i]!=t[i])
         test=0;
      }
   }
   sort(s.begin(),s.end());
   sort(t.begin(),t.end());
   if(s!=t)
   test=0;

   if(test==1)
   cout<<"YES"<<endl;
   else
   cout<<"NO"<<endl;

    }

}