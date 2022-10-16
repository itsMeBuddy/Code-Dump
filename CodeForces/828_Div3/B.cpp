#include<bits/stdc++.h>
#define int long long int
#define cin(dt) *istream_iterator<dt>(cin) 
using namespace std;

void tc(){
    int n,q;
    cin>>n>>q;
    vector<int> vec;

    int odd = 0, even = 0;
    int sum = 0;

    for(int i=0;i<n;i++){
        vec.push_back(cin(int));
        sum += vec[i];
        if(vec[i]%2 == 0){
            even++;    
        }
        else{
            odd++;
        }
    }

    for(int i=0;i<q;i++){
        int type;
        int num;
        cin>>type>>num;
        // cout<<"->";
        if(type == 0){
            sum += even*num;
            cout<<sum;
            if(num%2 == 0){
                // even
                //nothing
            }
            else if(num%2 == 1){
                //odd
                odd += even;
                even = 0;
            }
        }
        else if(type == 1){
            sum += odd*num;
            cout<<sum;
            if(num%2 == 0){
                //even
                //nothing
            }
            else if(num%2 == 1){
                //odd
                even += odd;
                odd = 0;
            }
        }
        cout<<endl;
    }

}

signed main(){

    int t = 1;
    cin>>t;
    while(t--)
        tc();

    return 0;
}