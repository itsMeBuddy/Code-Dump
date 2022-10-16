#include<bits/stdc++.h>
#define int long long int
#define cin(dt) *istream_iterator<dt>(cin) 
using namespace std;

void tc(){
    int n,k;
    cin>>n>>k;
    vector<int> vec;
    for(int i=0;i<n;i++){
        vec.push_back(cin(int));
    }
    int val = vec[k-1];

    int cnt = 0;
    for(int i=0;i<vec.size();i++){
        if(vec[i] >= val and vec[i]>0)
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