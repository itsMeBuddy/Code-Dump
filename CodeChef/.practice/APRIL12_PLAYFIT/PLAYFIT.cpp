#include <bits/stdc++.h>
#define int long long int
using namespace std;

void tc(){
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        vec.push_back(*istream_iterator<int> (cin));
    }
    int minn=INT_MAX;
    int ans=-1;
    for(int i=0;i<vec.size();i++){
        minn=min(minn,vec[i]);
        ans=max(ans,vec[i]-minn);
        // cout<<"min: "<<minn<<" : "<<"ans: "<<ans<<endl;
    }
    if(ans>0)
        cout<<ans<<endl;
    else
        cout<<"UNFIT"<<endl;
    
    // cout<<"================="<<endl;
}

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	    tc();
	return 0;
}
