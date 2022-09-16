#include <bits/stdc++.h>
using namespace std;

void disp(vector<int> &vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

void tc(){
    
    unordered_map<int,vector<int>> mp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        mp[temp].push_back(i);
    }
    int k;
    cin>>k;
    // vector<int> t;
    for(int i=0;i<k;i++){
        int temp;
        cin>>temp;
        mp[temp].clear();
    }
    
    vector<int> answerArray (100001,-1);
    
    for(auto it:mp){
        // cout<<it.first<<" : ";
        // disp(it.second);
        for(int i=0;i<it.second.size();i++){
            answerArray[it.second[i]]=it.first;
        }
    }
    
    for(int i=0;i<answerArray.size();i++){
        if(answerArray[i]!=-1){
            cout<<answerArray[i]<<" ";
        }
    }
    
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        tc();
        cout<<endl;
        // cout<<"\n........................\n";
    }

	return 0;
}