#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        map<char,int> mp; 
        char a,b,c,d;
        cin>>a>>b>>c>>d;
        mp[a]++;
        mp[b]++;
        mp[c]++;
        mp[d]++;

        int mex=0;
        
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second >= mex){
                mex=it->second;
            }
        }
        
        if(mp.size()==2){
            if(mp[mp.begin()->first] == 2){
                cout<<1<<endl;
                continue;
            }
        }
        cout<<4-mex<<endl;
    }
    return 0;
}