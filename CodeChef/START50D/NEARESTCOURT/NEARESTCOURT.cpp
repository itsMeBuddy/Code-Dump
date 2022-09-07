#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int temp=(x+y)/2;
	    cout<<max(abs(temp-x),abs(temp-y))<<endl;
	}
	return 0;
}
