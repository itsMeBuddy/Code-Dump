#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a=(n+6)/6;
    if(n%6 == 5){
        cout<<(3 * n) - (2 * a) - 2;
    }
    else if(n%6 ==0){
        cout<<(3 * n) - (2 * a) + 2;
    }
    else{
        cout<<(3 * n) - (2 * a);
    }
    cout<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}