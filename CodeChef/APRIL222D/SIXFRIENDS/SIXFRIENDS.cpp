#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    int X,Y;
	cin>>t;
	while(t--){
	    cin>>X;
	    cin>>Y;
	    3*X < 2*Y ? cout<<3*X<<endl : cout<<2*Y<<endl;
	}
	return 0;
}
