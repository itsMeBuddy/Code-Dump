// Correct

#include<bits/stdc++.h>
#define int long long int
using namespace std;

void display(vector<vector<char>> vec){
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++)
            cout<<vec[i][j]<<"";
        cout<<endl;
    }
    cout<<endl;
}

void tc(){

    vector<vector<char>> vec(8);

    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            char ch;
            cin>>ch;
            vec[i].push_back(ch);
        }
    }

    int cntR = 0;
    int cntB = 0;


    for(int i=0;i<8;i++){

        int cnt = 0;
        for(int j=0;j<8;j++){
            if(vec[i][j] == 'R')
                cnt++;
        }

        cntR = max(cntR,cnt);
    }

    // cout<<cntR<<endl;

    if(cntR == 8)
        cout<<"R";
    else
        cout<<"B";

    cout<<endl;

    // display(vec);
}

signed main(){

    int t;
    cin>>t;
    while(t--)
        tc();

    return 0;
}