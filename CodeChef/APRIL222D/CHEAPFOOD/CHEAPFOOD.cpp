#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int x;
	while(t--){
	    cin>>x;
	    0.1*x > 100 ? cout<<0.1*x<<endl : cout<<100<<endl;
	}
	return 0;
}
