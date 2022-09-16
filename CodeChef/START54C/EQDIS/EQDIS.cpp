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
	        mp[temp]++;
	        vec.push_back(temp);
	    }
	    
	    bool flag=false;
	    for(auto it=mp.begin(); it!= mp.end(); it++){
	        if(it->second > 1)
	            flag=true;
	       // cout<<it->second<<" ";
	    }
	    
	    if(mp.size() % 2 == 1){
	        if(flag)
	            cout<<"YES";
	        else
	            cout<<"NO";
	    }
	    else{
	        cout<<"YES";
	    }
	    
	    cout<<endl;
	}
	return 0;
}