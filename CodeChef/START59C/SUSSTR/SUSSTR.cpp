#include <bits/stdc++.h>
#define int long long int
using namespace std;

void tc(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int cnt0 = 0;
    int cnt1 = 0;
    list<char> li;
    for(int i=0;i<str.size();i++){
        char ch;
        if(i%2 == 0){
            ch = str[i/2];
            if(ch == '0'){
                li.push_front('0');
            }
            else{
                li.push_back('1');
            }
        }
        else{
            ch = str[n-1-i/2];
            if(ch == '0'){
                li.push_back('0');
            }
            else{
                li.push_front('1');
            }
        }
    }
    for(auto i: li){
        cout<<i;
    }
    cout<<endl;
    
    
    
}

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	    tc();
	return 0;
}
