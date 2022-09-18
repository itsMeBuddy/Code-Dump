#include<bits/stdc++.h>
// #define int long long
using namespace std;

void solve(vector<int> &vec){
    // cout<<"............\n";
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i<=n;i++){
        // cout<<".";
        for(int j=1;j<=n;j++){
            int a=gcd(i,j);
            a*=a;
            int b=i*j;

            if(b/a <= 3){
                // cout<<"("<<i<<" "<<j<<")"<<endl;
                cnt++;
            }
        }
    }
    vec.push_back(cnt);
    // cout<<cnt<<endl;
}

void display(vector<int> &vec){
    for(int i=0;i<vec.size();i++){
        cout<<i+1<<" : "<<vec[i]<<endl;
    }
}

signed main(){


    
    vector<int> vec;
    int t;
    cin>>t;
    while(t--){
        solve(vec);
    }

    cout<<endl;

    display(vec);

    return 0;
}