#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int m;
	    cin>>m;
	    
	    int temp=(n/m)*m;
	    
	    bool ans=false;
	    
	    if(temp == n){
	       // cout<<"Hi"<<endl;
	        if((n/m)%2 == 0){
	            ans=true;
	        }
	    }
	    
	    ans ? cout<<"Yes"<<endl : cout<<"No"<<endl;
	    
	}
	return 0;
}
