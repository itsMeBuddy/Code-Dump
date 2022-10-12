#include <bits/stdc++.h>
#define int long long int
using namespace std;

int even(int n){
    vector<int> v1, v2;
    for(int i=0;i<n/2;i++){
        v1.push_back(*istream_iterator<int> (cin));
    }
    reverse(v1.begin(),v1.end());                       // can be decreased [n/2-i]
    for(int i=0;i<n/2;i++){
        v2.push_back(*istream_iterator<int> (cin));
    }
    
    int cnt = 0;
    bool ans = true;
    int temp = 0;
    int t2 = 0;
    
    for(int i=0;i<v1.size();i++){
        temp = v2[i] - v1[i] -t2;
        

        
        if(temp < 0){
            ans = false;
            break;
        }
        
        cnt += temp;
        t2 = v2[i]-v1[i];
        // cout<<temp<<" ";
        
    }
    
    if(ans == true){
        // cout<<"->"<<cnt<<endl;
        return cnt;
    }
    else{
        // cout<<"-1"<<endl;
        return -1;
    }
   
}

int odd(int n){
    vector<int> v1, v2;
    for(int i=0;i<n/2;i++){
        v1.push_back(*istream_iterator<int> (cin));
    }
    reverse(v1.begin(),v1.end());                       // can be decreased [n/2-i]
    int ch = *istream_iterator<int> (cin);
    for(int i=0;i<n/2;i++){
        v2.push_back(*istream_iterator<int> (cin));
    }
    
    int cnt = 0;
    bool ans = true;
    int temp = 0;
    int t2 = 0;
    
    for(int i=0;i<v1.size();i++){
        temp = v2[i] - v1[i] -t2;
        

        
        if(temp < 0){
            ans = false;
            break;
        }
        
        cnt += temp;
        t2 = v2[i]-v1[i];
        // cout<<temp<<" ";
        
    }
    
    if(ans == true){
        // cout<<"->"<<cnt<<endl;
        return cnt;
    }
    else{
        // cout<<"-1"<<endl;
        return -1;
    }
}

void tc(){
    int n;
    cin>>n;
                                                                    //odd-even could be merged in a single function
    if(n%2 == 0)
        cout<<even(n);
    else
        cout<<odd(n);
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
