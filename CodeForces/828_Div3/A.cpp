#include<bits/stdc++.h>
#define int long long int
#define cin(dt) *istream_iterator<dt>(cin) 
using namespace std;

// void display(vector<char> vec){
//     cout<<"->";
//     for(int i=0;i<vec.size();i++)
//         cout<<vec[i] << " ";
//     cout<<endl;
// }

bool check(vector<char> vec){
    char ch = vec[0];
    for(int i=1;i<vec.size();i++){
        if(vec[i] != ch)
            return false;
    }
    return true;
}

void tc(){
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++)
        vec.push_back(cin(int));
    string str = cin(string);

    map <int,vector<char>> mp;

    for(int i=0;i<n;i++){
        mp[vec[i]].push_back(str[i]);
    }

    bool ans = true;

    for(auto it: mp){
        // cout<<it.first<<" ";
        // display(it.second);
        if(check(it.second) == false){
            ans = false;
            break;
        }
    }

    ans ? cout<<"YES"<<endl : cout<<"NO"<<endl;    

}

signed main(){

    int t = 1;
    cin>>t;
    while(t--)
        tc();

    return 0;
}