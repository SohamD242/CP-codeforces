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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        long long sum = 0;
        for (int i = 0; i < n-1 ; i++)
        {
            sum += arr[i];
        }
        cout<<fixed<<setprecision(9);
        cout << 1.0*(sum) / (n - 1) + (arr[n-1]) << endl;
    }
}