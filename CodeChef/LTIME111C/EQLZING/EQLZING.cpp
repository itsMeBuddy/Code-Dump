#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(abs(a-b)%2 == 1)
	        cout<<"No"<<endl;
	    else
	        cout<<"Yes"<<endl;
	}
	return 0;
}
