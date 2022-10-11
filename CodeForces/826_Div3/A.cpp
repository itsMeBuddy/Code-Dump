#include<bits/stdc++.h>
#define int long long int
using namespace std;

bool index(char ch){
    if(ch == 'S' or ch == 'M' or ch == 'L')
        return true;
    return false;
}

pair<int,char> solve(string str){
    
    int middleIndex = 0;
    for(int i=0;i<str.size();i++){
        if(index(str[i]) == true){
            middleIndex = i;
            break;    
        }
    }

    // cout<<middleIndex<<" : "<<str[middleIndex]<<"  ->";



    return {middleIndex, str[middleIndex]};

}

int ans(char ch){
    if(ch == 'S')
        return 1;
    if(ch == 'M')
        return 2;
    if(ch == 'L')
        return 3;
    
    return 0;
}

bool check(char ch){
    if(ch=='S')
        return false;
    return true;
}

void tc(){
    string a,b;
    cin>>a;
    cin>>b;
    pair<int,char> p1, p2;

    p1 = solve(a);
    p2 = solve(b);

    if(p1.second == p2.second and check(p1.second)){
        if(p1.first == p2.first){
            cout<<"="<<endl;
            return;
        }
        if(p1.first > p2.first){
            cout<<">"<<endl;
            return;
        }
        if(p1.first < p2.first){
            cout<<"<"<<endl;
            return;
        }
    }
    else if(p1.second == p2.second){
        if(p1.first == p2.first){
            cout<<"="<<endl;
            return;
        }
        if(p1.first > p2.first){
            cout<<"<"<<endl;
            return;
        }
        if(p1.first < p2.first){
            cout<<">"<<endl;
            return;
        }
    }

    else{
        if(ans(p1.second) < ans(p2.second)){
            cout<<"<"<<endl;
            return;
        }
        if(ans(p1.second) > ans(p2.second)){
            cout<<">"<<endl;
            return;
        }
    }

}

signed main(){
    int t;
    cin>>t;
    while(t--)
        tc();
}
