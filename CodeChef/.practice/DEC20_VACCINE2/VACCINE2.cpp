#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,d;
	    cin>>n>>d;
	    int cntRisk=0;
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        if(temp >= 80 || temp <= 9){
	            cntRisk++;
	        }
	    }
	    
	    int sum=ceil((cntRisk)/(float)d) + ceil((n-cntRisk)/(float)d);
	   // cout<<ceil((cntRisk)/(float)d)<<" : ";
	   // cout<<ceil((n-cntRisk)/(float)d)<<endl;
	    
	    cout<<sum<<endl;
	    
	}
	return 0;
}
