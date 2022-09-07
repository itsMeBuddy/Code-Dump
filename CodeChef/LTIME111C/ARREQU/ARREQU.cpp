#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> vec;
	    map <int,int> mp;
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        vec.push_back(temp);
	        mp[temp]++;
	    }
	    int mex=0;
	    for(auto it=mp.begin();it!=mp.end();it++){
	       // cout<<it->second<<" ";
	        mex=max(mex,it->second);
	    }
	    
	    if(mex <= ((n+1)/2))
	        cout<<"Yes"<<endl;
	       // cout<<"Yes :"<<mex<<endl;
	    else
	        cout<<"No"<<endl;
	       // cout<<"No :"<<mex<<endl;
	}
	return 0;
}
