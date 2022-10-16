#include<bits/stdc++.h>
#define int long long int
#define cin(dt) *istream_iterator<dt>(cin) 
using namespace std;

void tc(){
    string str;
    cin>>str;
    if(str.size()<=10){
        cout<<str<<endl;
        return;
    }
    else{
        string s;
        s += str[0];
        s += to_string(str.size()-2);
        s += str[str.size()-1];
        cout<<s<<endl;
    }
}

signed main(){

    int t;
    cin>>t;
    while(t--)
        tc();

    return 0;
}