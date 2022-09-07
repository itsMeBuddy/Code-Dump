#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if(x<n){
	        cout<<"-1";
	        cout<<endl;
	        continue;
	    }
	    cout<<x-n+1<<" ";
	    for(int i=0;i<n;i++){
	        if(i != x-n)
	            cout<<i+1<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
