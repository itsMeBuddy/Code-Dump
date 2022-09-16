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
	    for(int i=0;i<n;i++){
	        vec.push_back(*istream_iterator<int>(std::cin));
	    }
	    
	    long long geecd=0;
	    for(int i=0;i<n;i++)
	        geecd=gcd(geecd,vec[i]);
	    cout<<geecd*n<<endl;
	    
	}
	return 0;
}