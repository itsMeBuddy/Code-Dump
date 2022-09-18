#include<bits/stdc++.h>
#define int long long int
using namespace std;

signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int s1=0,s2=0,s3=0;
        s1=abs(a-1);
        s2=abs(b-c);
        s2+=abs(c-1);
        if(c==1){
            s2=abs(b-c);
        }
        if(s1<s2)
            cout<<1<<endl;
        else if(s2<s1)
            cout<<2<<endl;
        else
            cout<<3<<endl;
    }
    return 0;
}