#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        if(n%2==0){
            for(int i=1; i<=n; i+=2){
           cout<<i+1<<" "<<i<<" ";
        } 
        cout<<endl;
            
        }
        else{
            for (int i = 1; i <= n-3; i+=2)
            {
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<n<<" "<<n-2<<" "<<n-1<<endl;       
            }
        
        
    }
}