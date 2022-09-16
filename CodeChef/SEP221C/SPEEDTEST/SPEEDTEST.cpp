#include <iostream>
using namespace std;

void tc(){
    int a,x,b,y;
    cin>>a>>x>>b>>y;
    if(a/(float)x > b/(float)y)
        cout<<"Alice"<<endl;
    else if(a/(float)x < b/(float)y)
        cout<<"Bob"<<endl;
    else
        cout<<"Equal"<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t; 
	while(t--)
	    tc();
	return 0;
}