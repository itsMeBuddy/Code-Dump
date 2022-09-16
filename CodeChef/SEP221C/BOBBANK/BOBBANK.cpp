#include <iostream>
using namespace std;

void tc(){
    int w,x,y,z;
    cin>>w>>x>>y>>z;
    cout<<w+(x-y)*z<<endl;
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