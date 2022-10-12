#include <bits/stdc++.h>
#define int long long int
using namespace std;

void tc(){
    int n, k;
    cin>>n>>k;
    int a = n/k;
    cout<<pow(a,2)<<endl;
}

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    tc();
	}
	return 0;
}
