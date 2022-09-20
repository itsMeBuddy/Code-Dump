#include <bits/stdc++.h>
#define int long long int
using namespace std;

void tc(){
    int n;
    cin>>n;
    int tN=n;
    int mexx=INT_MIN;
    
    while(tN--){
        mexx=max(*istream_iterator<int> (cin),mexx);
    }
    cout<<n-mexx<<endl;
}

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	    tc();
	return 0;
}
