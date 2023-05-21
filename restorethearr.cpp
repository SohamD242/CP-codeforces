#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin >> t;
while (t--) {
int n;
cin >> n;
    vector<int> v(n-1);
    for(auto &e:v)
    cin>>e;

    vector<int>res(n,0);
    res[0]=v[0];

    for (int i = 1; i < n-1; i++)
    {
        if(v[i]>v[i-1]){
            res[i+1]=v[i];
            i+=1;
            if(i+1<n)
            res[i+1]=v[i];
        }
        else
        res[i]=v[i];
    }
    for(auto i : res)
    cout<<i<<" ";

    cout<<endl;
    


}

return 0;
}