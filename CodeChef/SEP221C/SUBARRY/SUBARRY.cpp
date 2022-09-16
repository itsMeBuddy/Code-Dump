#include <bits/stdc++.h>
#define int long long int
using namespace std;

void tc(){
    vector<int> vec;
    int n;
    cin>>n;
    int meen=INT_MAX;
    int maax=INT_MIN;
    while(n--){
        int temp;
        cin>>temp;
        meen=min(meen,temp);
        maax=max(maax,temp);
        vec.push_back(temp*temp);
    }
    
    // cout<<meen<<" "<<maax<<" : ";
    
    cout<<min(meen*maax,*min_element(vec.begin(),vec.end()))<<" "<<*max_element(vec.begin(),vec.end())<<endl;
    
    // cout<<vec[0]<<" "<<vec[vec.size()-1]<<endl;
    
    
}

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	    tc();
	return 0;
}