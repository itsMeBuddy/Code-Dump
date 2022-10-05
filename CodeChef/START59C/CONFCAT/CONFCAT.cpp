#include <iostream>
#include <bits/stdc++.h>
#define int long long int

using namespace std;

void display(vector<int> &a, vector<int> &b){
    cout<<a.size()<<endl;
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;
    cout<<b.size()<<endl;
    for(int i=0;i<b.size();i++)
        cout<<b[i]<<" ";
    
    cout<<endl;
}

void tc(){
    int n;
    cin>>n;
    vector<int> vec(n,0);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    
    bool flag = false;
    int ind=0;
    
    for(int i=1;i<vec.size();i++){
        if(vec[i]>vec[0]){
            flag = true;
            ind = i;
            break;
        }
    }
    
    if(flag == false){
        cout<<"-1"<<endl;
        return;
    }
    
    cout<<ind<<endl;
    for(int a=0;a<ind;a++){
        cout<<vec[a]<<" ";
    }
    cout<<endl;
    cout<<vec.size()-ind<<endl;
    for(int a=ind;a<vec.size();a++){
        cout<<vec[a]<<" ";
    }
    cout<<endl;
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
