// #include <bits/stdc++.h>
// using namespace std;
// #define int long long int
// int32_t main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int m;
//         cin >> m;
//         vector<vector<int>> v(m);
//         for (int i = 0; i < m; i++)
//         {
//             int n;
//             cin >> n;
//             for (int j = 0; j < n; j++)
//             {
//                 int x;
//                 cin >> x;
//                 v[i].push_back(x);
//             }
//         }
//         vector<int> ans(m,-1);
//         unordered_set<int> done;
//         for (int i = (m - 1); i >= 0; i--)
//         {
//             for (int j = 0; j < v[i].size(); j++)
//             {
//                 if (done.count(v[i][j]) == 0 )
//                 {
//                     ans[i] = v[i][j];
//                     done.insert(v[i][j]);
//                 }
//             }
//             if (ans[i] == -1)
//             {
//                 cout << -1 << endl;
               
//             }
//         }
//             for (int i = 0; i < m; i++)
//             cout << ans[i] << " ";
            
//             cout << endl;
        
//         int a,b,n,k,m,temp;
//    cin>>m;
//    map<int,int> mp;
//    map<int,int> mp1;
//    vector<int> v[m];
//    for(int j=0;j<m;j++)
//    {
//       cin>>n;
//       for(int i=0;i<n;i++)
//       {
//          cin>>temp;
//          v[j].push_back(temp);
//          mp[temp]++;
//       }
//    }
//    int Ans[m];
//    for(int i=0;i<m;i++)
//    Ans[i]=0;
//    for(int i=0;i<m;i++)
//    {
//       for(int j=0;j<v[i].size();j++)
//       {
//          mp1[v[i][j]]++;
         
//          if(mp[v[i][j]]==mp1[v[i][j]] && Ans[i]==0)
//          {
//             Ans[i]=v[i][j];
            
//          }  
 
//       }
//       /*cout<<Ans[i]<<endl;*/
//       if(Ans[i]==0)
//       {
//          cout<<"-1\n";
         
//       }
//    }
//    for(int i=0;i<m;i++)
//    cout<<Ans[i]<<" ";
//    cout<<endl;
//     }
// }
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
   int a,b,n,k,m,temp;
   cin>>m;
   map<int,int> mp;
   map<int,int> mp1;
   vector<int> v[m];
   for(int j=0;j<m;j++)
   {
      cin>>n;
      for(int i=0;i<n;i++)
      {
         cin>>temp;
         v[j].push_back(temp);
         mp[temp]++;
      }
   }
   int Ans[m];
   for(int i=0;i<m;i++)
   Ans[i]=0;
   for(int i=0;i<m;i++)
   {
      for(int j=0;j<v[i].size();j++)
      {
         mp1[v[i][j]]++;
         
         if(mp[v[i][j]]==mp1[v[i][j]] && Ans[i]==0)
         {
            Ans[i]=v[i][j];
            
         }  
 
      }
      /*cout<<Ans[i]<<endl;*/
      if(Ans[i]==0)
      {
         cout<<"-1\n";
         return;
      }
   }
   for(int i=0;i<m;i++)
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