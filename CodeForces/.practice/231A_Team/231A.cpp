#include<bits/stdc++.h>
#define int long long int
#define cin(dt) *istream_iterator<dt>(cin) 
using namespace std;

void tc(){
    int n;
    cin>>n;
    int cnt = 0;
    while(n--){
        int sum = cin(int) + cin(int) + cin(int);
        if(sum >= 2)
            cnt++;
    }
    cout<<cnt;
}

signed main(){

    int t = 1;
    // cin>>t;
    while(t--)
        tc();

    return 0;
}