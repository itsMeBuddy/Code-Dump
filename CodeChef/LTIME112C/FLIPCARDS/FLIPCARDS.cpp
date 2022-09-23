#include <iostream>
using namespace std;

void tc(){
    int n,x;
    cin>>n>>x;
    cout<<min(n-x,x)<<endl;
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
