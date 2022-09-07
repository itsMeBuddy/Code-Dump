#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int x,y;
	while(t--){
	    cin>>x;
	    cin>>y;
	    if(10*x > 5*y)
	        cout<<"FIRST"<<endl;
	    else if(10*x < 5*y)
	        cout<<"SECOND"<<endl;
	    else
	        cout<<"ANY"<<endl;
	}
	return 0;
}
