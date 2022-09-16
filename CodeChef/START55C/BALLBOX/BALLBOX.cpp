#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int k;
	    cin>>n>>k;
	    if(n<k){
	        cout<<"NO"<<endl;
	        continue;
	    }
	    
	    int sumTo_kMinus1=(k*(k-1))/2;
	    if(n >= sumTo_kMinus1+k)    cout<<"YES"<<endl;
	    else                        cout<<"NO"<<endl;
	    
	}
	return 0;
}