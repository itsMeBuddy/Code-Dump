#include <bits/stdc++.h>
#define int long long int
using namespace std;

void tc(){
    int n;
    cin>>n;
    vector<int> vec;
    bool flag=true;
    int cntNeg=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        vec.push_back(temp);
        if(temp<0)
            cntNeg++;
        if(temp==0)
            flag=false;
    }
    
    if(flag==false){
        cout<<0<<endl;
        return;
    }
    else if(cntNeg==0){
        cout<<0<<endl;
        return;
    }
    else{
        cntNeg%2==0 ? cout<<0<<endl : cout<<1<<endl;
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
