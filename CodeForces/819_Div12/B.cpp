#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &vec,int n){
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
}

void testcase(){
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    // if(sum<n){
    //     cout<<"No"<<endl;
    //     return;
    // }

    if(n==1){
        cout<<"Yes"<<endl<<sum<<endl;
        return;
    }
    
    int num=ceil(sum/(float)n);
    // cout<<num;
    int num2=num*2;

    bool anss=true;

    vector<int> ans;
    while(sum-num2 >= 0){
        sum-=num2;
        ans.push_back(num);
        ans.push_back(num);
        // cout<<num<<" "<<num<<" "; 
    }
    if(n%2 == 1){
        if(num == sum){
            ans.push_back(num);
            // cout<<num<<endl;
        }
        else{
            anss=false;
            // cout<<"NO"<<endl;
        }
    }
    else{
        if((sum/2 + sum/2) == sum){
            ans.push_back(sum/2);
            ans.push_back(sum/2);
        }
        else{
            anss=false;
        }
    }

    if(anss){
        cout<<"Yes"<<endl;
        display(ans,n);
    }
    else{
        cout<<"No";
    }
    cout<<endl;
    
}

int main(){

    int t;
    cin>>t;
    while(t--)
        testcase();

    return 0;
}