#include <iostream>
using namespace std;

void tc(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int cnt0=0;
    int cnt1=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='0')
            cnt0++;
        else
            cnt1++;
    }
    
    if(str.size()==2){
        cout<<str;
    }
    else{
        for(int i=0;i<cnt0;i++){
            cout<<0;
        }
        for(int i=0;i<cnt1;i++){
            cout<<1;
        }
    }

    // else{
    //     if(str=="100")
    //         cout<<"010";
    //     else if(str=="101")
    //         cout<<"011";
    //     else if(str=="110")
    //         cout<<"101";
    //     else
    //         cout<<str;
    // }
    
    cout<<endl;
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	    tc();
	return 0;
}
