#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> vec, cntVec={1};
	    for(int i=0;i<n;i++){
	        vec.push_back(*istream_iterator<int> (cin));
	    }
	    int cnt=1;
	    vector<int> ans;
	    for(int i=0;i<n-1;i++){
	        if(vec[i+1]-vec[i] <= 2){
	            cnt++;
	        }
	        else{
	           // cout<<cnt<<" ";
	            ans.push_back(cnt);
	            cnt=1;
	        }
	    }
	    ans.push_back(cnt);
	   // cout<<cnt;
	   // cout<<endl;
	    cout<<*min_element(ans.begin(),ans.end());
	    cout<<" "<<*max_element(ans.begin(),ans.end());
	    cout<<endl;
	}
	return 0;
}