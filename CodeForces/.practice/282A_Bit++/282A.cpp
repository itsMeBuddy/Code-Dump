#include<bits/stdc++.h>
#define int long long int
#define cin(dt) *istream_iterator<dt>(cin) 
using namespace std;

void tc(){
    int n;
    cin>>n;
    int ans = 0;
    for(int i=0;i<n;i++){
        string str = cin(string);
        if(str == "X++")
            ans++;
        else if(str == "--X")
            ans--;
        else if(str == "++X")
            ans++;
        else if(str == "X--")
            ans--;
    }
    cout<<ans;
}

signed main(){

    int t = 1;
    // cin>>t;
    while(t--)
        tc();

    return 0;
}