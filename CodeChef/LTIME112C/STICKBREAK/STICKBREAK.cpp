#include <bits/stdc++.h>
#define int long long int
using namespace std;

void tc(){
    int l,k;
    cin>>l>>k;

    if(l%k==0)
        cout<<"0"<<endl;
    else{
        cout<<"1"<<endl;
    }
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
