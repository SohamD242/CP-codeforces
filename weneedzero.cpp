#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int xor_sum = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            xor_sum ^= a;
        }
        if (xor_sum == 0) {
            cout << 0 << endl;
        } else {
            if(n%2==0)
            cout<<-1<<endl;
            else
            cout << xor_sum << endl;
        }
    }
    return 0;
}
