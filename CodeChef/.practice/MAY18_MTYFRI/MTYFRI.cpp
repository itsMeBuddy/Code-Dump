#include <bits/stdc++.h>
#define int long long int
using namespace std;

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int> vec;
	    for(int i=0;i<n;i++){
	        vec.push_back(*istream_iterator<int> (cin));
	    }
	    
	    vector<int> motu,tomu;
	    int motuS=0,tomuS=0;
	    for(int i=0;i<n;i+=2){
	        motu.push_back(vec[i]);
	        motuS+=vec[i];
	    }
	    for(int i=1;i<n;i+=2){
	        tomu.push_back(vec[i]);
	        tomuS+=vec[i];
	    }
	    
	    sort(motu.begin(),motu.end());
	    sort(tomu.begin(),tomu.end());
	    
	    for(int i=0;i<k && i<motu.size() && i<tomu.size() ;i++){
	        int y=motu[motu.size()-1-i];
	        int x=tomu[i];
	        if(y>x){
	            tomuS+=(y-x);
	            motuS-=(y-x);
	        }
	        else{
	            break;
	        }
	    }
	    
	   // cout<<motuS<<" "<<tomuS<<endl;
	    
	    tomuS > motuS ? cout<<"YES"<<endl : cout<<"NO"<<endl;
	    
	}
	return 0;
}
