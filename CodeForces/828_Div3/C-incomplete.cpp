#include<bits/stdc++.h>
#define int long long int
#define cin(dt) *istream_iterator<dt>(cin) 
using namespace std;


void display(vector<int> vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

void tc(){
    int n = cin(int);
    char ch;
    cin>>ch;
    string str = cin(string);

    if(ch == 'g'){
        cout<<0<<endl;
        return;
    }

    str += str;

    int x = 0;
    while(str[x] != ch){
        x++;
    }

    int z=x+1;
    while(str[z]!='g' and z<str.size())
        z++;


    map<char, vector<int>> mp;
    for(int i=x;i<n+x;i++){
        mp[str[i]].push_back(i);
    }

    vector<int> g,r,y;


    for(auto it : mp){
        // cout<<it.first<<"->";
        // display(it.second);
        if(it.first == 'g')
            g = it.second;
        if(it.first == 'r')
            r = it.second;
        if(it.first == 'y')
            y = it.second;

    }

    vector<int> che;

    cout<<"g->";
    for(int i=0;i<g.size();i++){
        cout<<g[i]<<" ";
    }
    cout<<endl;
    cout<<"r->";
    for(int i=0;i<r.size();i++){
        cout<<r[i]<<" ";
    }
    cout<<endl;
    cout<<"y->";
    for(int i=0;i<y.size();i++){
        cout<<y[i]<<" ";
    }
    cout<<endl;

    // if(ch == 'y')
    //     che = y;
    // else if(ch == 'r')
    //     che = r;

    // int j = 0;

    // int ans = 0;

    // for(int i=0;i<g.size();i++){
    //     for(;j<che.size();j++){
    //         if(g[i]-che[j] >= 0){   
    //             ans = max(ans, g[i]-che[j]);
    //         }
    //     }
    // }

    // cout<<" -> "<<ans<<endl;


}

signed main(){

    int t = 1;
    cin>>t;
    while(t--)
        tc();

    return 0;
}