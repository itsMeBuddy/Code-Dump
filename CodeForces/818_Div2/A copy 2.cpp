#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    // cout<<n%6<<" : "<<(n+6)/6<<"..........";
    if(n%6 == 5){
        // cout<<"-->"<<(n+6)/6<<"-->";
        // cout<<"#5....";
        int a=(n+6)/6;
        cout<<(3 * n) - (2 * a) - 2;
    }
    else if(n%6 ==0){
        // cout<<"-->"<<(n+6)/6<<"-->";
        // cout<<"#0";
        int a=(n+6)/6;
        cout<<(3 * n) - (2 * a) + 2;
    }
    else{
        int a=(n+6)/6;
        cout<<(3 * n) - (2 * a);
    }
    cout<<endl;
    // cout<<endl<<endl;
}


signed main(){


    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}