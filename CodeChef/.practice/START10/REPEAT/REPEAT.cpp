#include <bits/stdc++.h>
using namespace std;

void tc(){
    int n,s,k;
    cin>>n>>k>>s;
    
    cout<<(s-(n*n))/(k-1)<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    tc();
	}
	return 0;
}