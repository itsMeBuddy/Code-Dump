// UNSOLVED


#include<bits/stdc++.h>
#define int long long int
using namespace std;

void display(string str, vector<int> &v){
    cout<<str<<"-> ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"---------------------\n";
}

pair<int,string> check(vector<int> &vec){
    int cnt=0;
    // pair<int,string> p;
    string str="";
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i];j++){
            cnt++;
            str += to_string(i+1);
            str += " ";
            // cout<<i+1<<" ";
        }
    }
    return {cnt,str};
}

void tc(){

    int n,x,y;
    cin>>n>>x>>y;
    
    if(x<y)
        swap(x,y);

    vector<int> v1, v2;

    for(int i=0;i<n;i++){
        v1.push_back(0);
        v2.push_back(0);
    }

    for(int i=0;i<n;i++){
        v1[i]=1;
        i+=x;
    }
    for(int i=0;i<n;i++){
        v2[i]=1;
        i+=y;
    }

    // display("v1",v1);
    // display("v2",v2);

    // Two Cases

        //v1
        vector<int> tempV1a=v1;
        for(int i=0;i<tempV1a.size();i++){
            if(tempV1a[i]==1){
                tempV1a[i]=x;
            }
            else{
                tempV1a[i]=y;
            }
        }
        // display("tempV1a",tempV1a);
        vector<int> tempV1b=v1;
        for(int i=0;i<tempV1b.size();i++){
            if(tempV1b[i]!=1){
                tempV1b[i]=x;
            }
            else{
                tempV1b[i]=y;
            }
        }
        // display("tempV1b",tempV1b);

        //v1
        vector<int> tempV2a=v2;
        for(int i=0;i<tempV2a.size();i++){
            if(tempV2a[i]==1){
                tempV2a[i]=x;
            }
            else{
                tempV2a[i]=y;
            }
        }
        // display("tempV2a",tempV2a);
        vector<int> tempV2b=v2;
        for(int i=0;i<tempV2b.size();i++){
            if(tempV2b[i]!=1){
                tempV2b[i]=x;
            }
            else{
                tempV2b[i]=y;
            }
        }
        // display("tempV2b",tempV2b);

    // Done tempV1a tempV1b tempV2a tempV2b

    pair<int,string> p;

    string answer="";

    bool flag=false;

        // cout<<"----->";
    p=check(tempV1a);
    if(p.first==n-1){
        // cout<<p.second;
        answer=p.second;
        flag=true;
    }
    // cout<<"<-----";
        // cout<<"----->";
    p=check(tempV1b);
    if(p.first==n-1){
        // cout<<p.second;
        answer=p.second;
        flag=true;
    }
    // cout<<"<-----";
        // cout<<"----->";
    p=check(tempV2a);
    if(p.first==n-1){
        // cout<<p.second;
        answer=p.second;
        flag=true;
    }
    // cout<<"<-----";
        // cout<<"----->";
    p=check(tempV2b);
    if(p.first==n-1){
        // cout<<p.second;
        answer=p.second;
        flag=true;
    }
    // cout<<"<-----";

    // cout<<"=============================\n";

    if(flag){
        cout<<answer<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }

}

signed main(){

    int t;
    cin>>t;
    while(t--)
        tc();
    return 0;
}