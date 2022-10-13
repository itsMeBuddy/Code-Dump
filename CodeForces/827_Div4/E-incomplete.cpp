// INCOMPLETE


#include<bits/stdc++.h>
#define int long long int
using namespace std;

void display(vector<int> vec){
    cout<<endl<<"...........................\n";
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl<<"...........................\n";
}

void tc(){
    int n,q;
    cin>>n>>q;
    vector<int> v,query;
    int level = 0;
    while(n--){
        int temp;
        cin>>temp;
        level += temp;
        v.push_back(level);
    }

    while(q--){
        query.push_back(*istream_iterator<int> (cin));
    }


    cout<<"# ";

    v.push_back(0);
    // display(v);
    for(int i=0;i<query.size();i++){
        int ans = 0;
        int j = 1;

        while( query[i] >= (v[j]-v[j-1])  and  j<v.size()){
            ans = v[j];
            j++;
        }
        cout<<ans<<" ";
    }
    cout<<endl<<endl<<endl;

}

signed main(){

    int t;
    cin>>t;
    while(t--)
        tc();

    return 0;
}