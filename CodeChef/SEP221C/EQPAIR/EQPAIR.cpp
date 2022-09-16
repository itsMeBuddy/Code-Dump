#include <bits/stdc++.h>
#define int long long int
using namespace std;

void tc(){
    int n;
    cin>>n;
    map<int,int> mp;
    while(n--){
        int temp;
        cin>>temp;
        mp[temp]++;
    }
    
    int cnt=0;
    
    for(auto it : mp){
        int a=it.second;
        cnt+=(a*(a-1)/2); //nC2
    }
    
    cout<<cnt<<endl;
    
}

signed main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--)
	    tc();
	
	return 0;
}