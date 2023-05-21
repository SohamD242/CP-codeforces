#include<bits/stdc++.h>
const int M = 1e9+7;
using namespace std;
 
long long inv(long long i) 
{
  return i <= 1 ? i : M - (long long)(M/i) * inv(M % i) % M;
}
 
 
long long ncr(int n,int r)
{
   long long num=1;
   for(int i=1;i<=n;i++)
   {
      num = ((num % M) * i)%M;
   }
 
   long long den = 1;
   for(int i=1;i<=r;i++)
   den = ((den % M) * i)%M;
   
   
   long long invden = inv(den);
   long long ans = ((num%M)*(invden%M))%M;
   return ans%M;
 
}
 
bool binaryfun(long long x,long long A[],long long sum[])
{
   cout<<"? "<<x+1<<" ";
   for(int i=0;i<=x;i++)
   cout<<i+1<<" ";
   cout<<endl;
   int h;
   cin>>h;
   /*return true;*/
   if(h>sum[x])
   return true;
   else  
   return false;
}
 
void solve()
{     
   int n,k,m;
   cin>>n>>m;
   int A[m];
   for(int i=0;i<m;i++)
   cin>>A[i];
 
   int Ans[n+1];
   for(int i=0;i<=n;i++)
   Ans[i]=-1;
 
   set<int> st;
   int temp=n;
   for(int i=0;i<m;i++)
   {
      if(st.find(A[i])==st.end())
      {
         st.insert(A[i]);
         Ans[temp]  = i+1;
         temp--;
      }
   }
   for(int i=1;i<=n;i++)
   cout<<Ans[i]<<" ";
   cout<<endl;
}  
 
int main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;
   cin>>t;
   while(t--)
   {
      solve();
   }   
   return 0;
}