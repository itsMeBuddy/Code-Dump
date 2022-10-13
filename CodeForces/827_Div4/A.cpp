// Correct

#include<bits/stdc++.h>
#define int long long int
using namespace std;

void tc(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b == c or b+c == a or a+c== b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

signed main(){

    int t;
    cin>>t;
    while(t--)
        tc();

    return 0;
}