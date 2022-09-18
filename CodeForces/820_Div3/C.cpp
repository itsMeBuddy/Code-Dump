#include<bits/stdc++.h>
#define int long long int
using namespace std;

int convertToINT(char ch){
    if(ch=='a')
        return 1;
    else if(ch=='b')
        return 2;
    else if(ch=='c')
        return 3;
    else if(ch=='d')
        return 4;
    else if(ch=='e')
        return 5;
    else if(ch=='f')
        return 6;
    else if(ch=='g')
        return 7;
    else if(ch=='h')
        return 8;
    else if(ch=='i')
        return 9;
    else if(ch=='j')
        return 10;
    else if(ch=='k')
        return 11;
    else if(ch=='l')
        return 12;
    else if(ch=='m')
        return 13;
    else if(ch=='n')
        return 14;
    else if(ch=='o')
        return 15;
    else if(ch=='p')
        return 16;
    else if(ch=='q')
        return 17;
    else if(ch=='r')
        return 18;
    else if(ch=='s')
        return 19;
    else if(ch=='t')
        return 20;
    else if(ch=='u')
        return 21;
    else if(ch=='v')
        return 22;
    else if(ch=='w')
        return 23;
    else if(ch=='x')
        return 24;
    else if(ch=='y')
        return 25;
    else if(ch=='z')
        return 26;    
    
    return 0;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        unordered_map <int,int> mp;
        for(int i=0;i<str.size();i++){
            mp[convertToINT(str[i])]++;
        }
        for(auto it:mp){
            cout<<it.first<<":"<<it.second<<"  ";
        }
        cout<<endl;
    }
    return 0;
}