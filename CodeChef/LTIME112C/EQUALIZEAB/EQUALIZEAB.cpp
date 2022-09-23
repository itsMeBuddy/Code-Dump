#include <iostream>
using namespace std;

void tc(){
    int a,b,x;
    cin>>a>>b>>x;
    int dist= abs(a-b);
    if(dist % (2*x) == 0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
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
