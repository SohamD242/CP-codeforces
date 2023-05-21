#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int h,m; cin>>h>>m;
        if(h==23){
            cout<<60-m<<endl;
        }
        else if(h==0&&m!=0){
            cout<<1440-m<<endl;
        }
        else{
            cout<<((24-h)*60)-m<<endl;
        }
    }
}