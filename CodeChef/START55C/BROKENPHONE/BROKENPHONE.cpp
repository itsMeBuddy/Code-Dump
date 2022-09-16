#include <bits/stdc++.h>
using namespace std;

void testcase(){
    int x,y;
    cin>>x>>y;
    int a=min(x,y);
    if(x!=y)
        a==x ? cout<<"REPAIR" : cout<<"NEW PHONE";
    else
        cout<<"ANY";
    cout<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    testcase();
	}
	return 0;
}