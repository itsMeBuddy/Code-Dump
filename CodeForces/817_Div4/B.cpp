#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
        int n;
		cin>>n;
        vector<char> ch1, ch2;
        for(int i=0;i<n;i++){
            char ch;
            cin>>ch;
            if(ch=='G' || ch=='B')
                ch='x';
            ch1.push_back(ch);
        }
        for(int i=0;i<n;i++){
            char ch;
            cin>>ch;
            if(ch=='G' || ch=='B')
                ch='x';
            ch2.push_back(ch);
        }

        if(ch1!=ch2)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

	}
	return 0;
}