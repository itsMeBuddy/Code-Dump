#include<bits/stdc++.h>
#define int long long int
using namespace std;

void convertToCh(string s){
    if(s=="1")
        cout<<"a";
    else if(s=="2")
        cout<<"b";
    else if(s=="3")
        cout<<"c";
    else if(s=="4")
        cout<<"d";
    else if(s=="5")
        cout<<"e";
    else if(s=="6")
        cout<<"f";
    else if(s=="7")
        cout<<"g";
    else if(s=="8")
        cout<<"h";
    else if(s=="9")
        cout<<"i";
    else if(s=="10")
        cout<<"j";
    else if(s=="11")
        cout<<"k";
    else if(s=="12")
        cout<<"l";
    else if(s=="13")
        cout<<"m";
    else if(s=="14")
        cout<<"n";
    else if(s=="15")
        cout<<"o";
    else if(s=="16")
        cout<<"p";
    else if(s=="17")
        cout<<"q";
    else if(s=="18")
        cout<<"r";
    else if(s=="19")
        cout<<"s";
    else if(s=="20")
        cout<<"t";
    else if(s=="21")
        cout<<"u";
    else if(s=="22")
        cout<<"v";
    else if(s=="23")
        cout<<"w";
    else if(s=="24")
        cout<<"x";
    else if(s=="25")
        cout<<"y";
    else if(s=="26")
        cout<<"z";
    
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        while(n--){
            char ch;
            cin>>ch;
            str+=ch;
        }

        for(int i=0;i<str.size();i++){
            if(str[i]=='0' && str[i+1]=='0'){
                str[i+1]='x';
            }
            else if(str[i]=='0'){
                str[i]='x';
            }
        }

        // cout<<str<<endl;
        vector<string> vec;
        str+="yyy";
        for(int i=0;i<=str.size();){
            
            string temp;
            if(str[i+2]=='x'){
                temp+=str[i];
                temp+=str[i+1];
                // cout<<str[i]<<str[i+1];
                i+=3;
                // cout<<" ";
                // cout<<temp<<" ";
            }
            else{
                temp=str[i];
                // cout<<str[i]<<" ";
                i++;
            }
            // cout<<"\'"<<temp<<"\'"<<" ";
            convertToCh(temp);
        }
        cout<<endl;

    }
    return 0;
}