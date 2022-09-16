#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a;
	    vector<int> b;
	    int suma=0,sumb=0;
	    for(int i=0;i<n;i++){
    	    int temp;
	        cin>>temp;
	        suma+=temp;
	        a.push_back(temp);
	    }
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        sumb+=temp;
	        b.push_back(temp);
	    }
	    
	    int sum=0;
	    for(int i=0;i<n;i++){
	        if(!(a[i] > b[i])){
	           // sum += 0;
	       // }
	       // else{
	            sum += b[i]-a[i];
	        }
	    }
	    
	    if(suma==sumb){
	        cout<<sum<<endl;
	    }
	    else{
	        cout<<"-1"<<endl;
	    }
        

	}
	return 0;
}