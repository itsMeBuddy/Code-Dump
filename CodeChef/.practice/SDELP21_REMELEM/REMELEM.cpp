#include <bits/stdc++.h>
#define int long long int
using namespace std;

void tc(){
    
    int n,k;
    cin>>n>>k;
    vector<int> vec;
    for(int i=0;i<n;i++){
        vec.push_back(*istream_iterator<int> (cin));
    }
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }
    sort(vec.begin(),vec.end(),greater<int>());
    
    if(vec[0]+vec[n-1] <= k)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
    
}

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	    tc();
	return 0;
}
