#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string A,B;
	    cin>>A>>B;
	    
	    map<char,int> mp;
	    for(int i=0;i<A.size();i++){
	        mp[A[i]]++;
	    }
	    for(int i=0;i<B.size();i++){
	        mp[B[i]]++;
	    }
	    
	    string C="";
	    cin>>n;
	    for(int i=0;i<n;i++){
	        string temp;
	        cin>>temp;
	        C+=temp;
	    }
	    bool ans=true;
	    for(int i=0;i<C.size();i++){
	        mp[C[i]]--;
	        if(mp[C[i]]<0){
	            ans=false;
	            break;
	        }
	    }
	    
	    ans ? cout<<"YES" : cout<<"NO";
	    cout<<endl;
	}
	return 0;
}
