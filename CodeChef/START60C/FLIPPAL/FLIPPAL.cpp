#include <bits/stdc++.h>
#define int long long int
using namespace std;

void tc(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    
    int cnt0 = 0, cnt1 = 0;
    
    for(int i=0;i<str.size();i++){
        if(str[i] == '0')
            cnt0++;
    }
    cnt1 = n - cnt0;
    
    // cout<<cnt0<<" "<<cnt1<<endl;
    
    if(cnt0%2 == 1){
        if(cnt1%2 == 1)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    else
        cout<<"Yes"<<endl;
    
    
}

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	    tc();
	return 0;
}
