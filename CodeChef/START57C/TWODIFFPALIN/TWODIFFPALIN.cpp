#include <iostream>
#define int long long int
using namespace std;

void tc(){
    int a,b;
    cin>>a>>b;
    
    if(a==1 or b==1){
        cout<<"No"<<endl;
        return;
    }
    
    if(a%2 == 1 && b%2==1){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    tc();
	}
	return 0;
}
