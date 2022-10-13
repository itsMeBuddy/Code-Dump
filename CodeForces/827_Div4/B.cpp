// Correct

#include<bits/stdc++.h>
#define int long long int
using namespace std;

void tc(){
    int n;
    cin>>n;
    vector<int> vec;
    while(n--)
        vec.push_back(*istream_iterator<int> (cin));

    sort(vec.begin(),vec.end());
    bool ans = true;
    for(int i=0;i<vec.size()-1;i++){
        if(vec[i+1] == vec[i]){
            ans = false;
            break;
        }
    }

    ans ? cout<<"YES" : cout<<"NO";
    cout<<endl;

}

signed main(){

    int t;
    cin>>t;
    while(t--)
        tc();

    return 0;
}