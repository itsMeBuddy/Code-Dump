#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> vec;
	    for(int i=0;i<n;i++){
	        int temp=0;
	        cin>>temp;
	        vec.push_back(temp);
	    }
	    string str;
	    cin>>str;

        vector<int> x;
        for(int i=0;i<str.size();i++){
            if(str[i]=='0'){
                x.push_back(vec[i]);
            }
        }
        
        cout<<*min_element(x.begin(),x.end())<<endl;
	    
	}
	return 0;
}