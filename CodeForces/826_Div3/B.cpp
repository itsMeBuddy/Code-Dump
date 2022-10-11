#include<bits/stdc++.h>
#define int long long int
using namespace std;

void tc(){
    int n;
    cin>>n;
    if(n==1 or n==3){
        cout<<-1<<endl;
        return;
    }
    if(n==5){
        cout<<"5 4 1 2 3"<<endl;
        return;
    }

    if(n%2 == 0){
        for(int i=n;i>=1;i--){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    vector<int> ans;

    for(int i=n;i>0;i--){
        ans.push_back(i);
    }

    swap(ans[n/2], ans[n/2 +1]);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" "; 
    }
    cout<<endl;

}

signed main(){
    int t;
    cin>>t;
    while(t--)
        tc();
}
