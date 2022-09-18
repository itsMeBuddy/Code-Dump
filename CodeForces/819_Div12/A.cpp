#include<bits/stdc++.h>
using namespace std;

void testcase(){
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        vec.push_back(*istream_iterator<int> (cin));
    }

    int a0=vec[0];
    int maxx1=0;
    for(int i=1;i<n;i++){
        maxx1=max(vec[i]-a0,maxx1);
    }
    // cout<<"->"<<maxx<<endl;
    
    int an=vec[n-1];
    int maxx2=0;
    for(int i=0;i<n-1;i++){
        maxx2=max(an-vec[i],maxx2);
    }
    // cout<<"->"<<maxx<<endl;
    int maxx3=abs(vec[n-1]-vec[0]);
    for(int i=0;i<n-1;i++){
        maxx3=max(maxx3,vec[i]-vec[i+1]);
    }
    // cout<<"->"<<maxx<<endl;
    cout<<max(maxx1,max(maxx2,maxx3))<<endl;
    // cout<<endl<<"............................."<<endl;

}

int main(){

    int t;
    cin>>t;
    while(t--)
        testcase();

    return 0;
}