#include<bits/stdc++.h>
#define int long long int
using namespace std;

void display(vector<vector<int>> &vec){
    for(int i=0;i<vec.size();i++){
        cout<<"->";
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" "; 
        }
        cout<<endl;
    }
    cout<<"-------------------------\n\n";
}

void tc(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>> vec(k);

    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        vec[i%k].push_back(temp);
    }

    // display(vec);

    for(int i=0;i<k;i++){
        sort(vec[i].begin(),vec[i].end(),greater<int> () );
    }

    // display(vec);

    int sum=0;
    for(int i=0;i<k;i++){
        sum+=vec[i][0];
    }
    cout<<sum<<endl;
    // cout<<"->"<<sum<<endl;
    // cout<<"===============================\n\n";

}

signed main(){

    int t;
    cin>>t;
    while(t--)
        tc();
    return 0;
}