#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void display(vector<vector<int>> &vec){
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[0].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n==1){
	        cout<<"1"<<endl;
	        continue;
	    }
	    
	    vector<int> vec(n,0);
	    
	    int temp=n-1;
	    for(int i=0;i<vec.size()/2;i++){
	        vec[i]=temp;
	        temp-=2;
	    }
	    temp=n;
	    for(int i=n-1;i>=vec.size()/2;i--){
	        vec[i]=temp;
	        temp-=2;
	    }
	    
	    for(int i=0;i<vec.size();i++){
	        cout<<vec[i]<<" ";
	    }
	    
	    
        cout<<endl;
	}
	return 0;
}
