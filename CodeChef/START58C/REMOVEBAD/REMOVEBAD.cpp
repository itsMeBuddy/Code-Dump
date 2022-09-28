#include <bits/stdc++.h>
#define int long long int
using namespace std;

void tc(){
    int n;
    cin>>n;
    map<int,int> mp;
    int mex = -1;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        mp[temp]++;
        mex = max(mp[temp],mex);
    }
    
    
    
    cout<<n-mex<<endl;
}

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    tc();
	}
	return 0;
}
