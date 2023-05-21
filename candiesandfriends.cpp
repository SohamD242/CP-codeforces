#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      sum += a[i];
    }
    int s = sum / n;
    int cnt = 0;

    if (sum % n != 0){
         cout << "-1" << endl;
        
    }
    else{
        for (int i = 0; i < n; i++)
      {
        if (a[i] > s){
            cnt++;
        }
          
      }
      cout<<cnt<<endl;
    }
      
    
  

  }
}