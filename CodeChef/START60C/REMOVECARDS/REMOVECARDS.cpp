#include <bits/stdc++.h>
using namespace std;

void tc(){
    int n;
    cin>>n;
    map<int,int> mp;
    int _n = n;
    while(n--){
        int temp;
        cin>>temp;
        mp[temp]++;
    }
    
    int mex = INT_MIN;
    
    for(auto it: mp){
        mex = max(mex,it.second);
    }
    
    cout<<_n-mex<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	    tc();
	return 0;
}
