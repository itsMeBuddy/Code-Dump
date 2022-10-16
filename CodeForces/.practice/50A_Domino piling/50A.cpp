#include<bits/stdc++.h>
#define int long long int
#define cin(dt) *istream_iterator<dt>(cin) 
using namespace std;

void tc(){
    int m = cin(int), n = cin(int);

    if(m == 1 and n == 1){
        cout<<"0";
        return;
    }
    // m > n
    if(n>m)
        swap(m,n);
    // cout<<m/2*n<<" ";
    // cout<<(n/2) * (m-m/2*2);

    int ans = 0;
    ans += m/2 * n;
    ans += (n/2) * (m-m/2*2);

    cout<<ans;
}

signed main(){

    int t = 1;
    // cin>>t;
    while(t--)
        tc();

    return 0;
}