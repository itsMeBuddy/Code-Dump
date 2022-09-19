#include <bits/stdc++.h>
#define int long long int 
using namespace std;

string _binary(int a){
    string ans = "";
    while(a){
        ans += to_string(a%2);
        a/=2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

// void equalise(string &str, int n){
//     for(int i=str.size();i<n;i++){
//         str+=to_string(0);
//     }
// }

void tc(){
    int a,b;
    cin>>a>>b;
    // if(b>a)
    //     swap(a,b);
    string ba=_binary(a);
    string bb=_binary(b);
    
    int cnt=0;
    while(ba[cnt] == bb[cnt] and cnt<ba.size() and cnt<bb.size()){
        cnt++;
    }
    
    cout<<ba.size()-cnt + bb.size()-cnt<<endl;
}

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	    tc();
	return 0;
}
