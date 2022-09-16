#include <iostream>
#define int long long
using namespace std;

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n%2==1)
	        cout<<((n/2)*((n/2)+1))*2<<endl;
	    else
	        cout<<(n/2)*(n)<<endl;
	}
	return 0;
}