// WrongAnswer ON TC-12

#include<bits/stdc++.h>
#define int long long int
using namespace std;

bool cop(int a, int b){
    if(__gcd(a,b) == 1)
        return true;
    else
        return false;
}

int tc(){
    int n;
    cin>>n;

    vector<int> vec;

    vec.push_back(-1);

    while(n--){
        vec.push_back(*istream_iterator<int> (cin));
    }

    int ans = -1;

    for(int i = vec.size()-1; i>0; i--){
        for(int j = vec.size()-1; j>0; j--){
            if(cop(vec[i],vec[j])){
                // cout<<"--->"<<vec[i]<<" : "<<vec[j]<<" -> "<<i<<" "<<j<<endl; 
                ans = max(ans,i+j);
                if(i+j < ans)
                    return ans;
            }
        }
    }

    return ans;
}

signed main(){

    int t;
    cin>>t;
    while(t--)
        cout<<tc()<<endl;

    return 0;
}