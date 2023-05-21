#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x1, y1, x2, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;
        x1--,y1--;
        int a=min(x1,n-x1-1);
        int b=min(y1,n-y1-1);
        int m1=min(a,b);

        x2--,y2--;
        int c=min(x2,n-x2-1);
        int d=min(y2,n-y2-1);
        int m2=min(c,d);

        cout<<abs(m1-m2)<<endl;
    }
    return 0;
}
