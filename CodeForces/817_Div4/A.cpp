#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<char> str;
		map <char,int> mp;
		for(int i=0;i<n;i++){
			char ch;
			cin>>ch;
			str.push_back(ch);
			mp[ch]++;
		}

		if(str.size()!=5){
			cout<<"NO"<<endl;
			continue;
		}

		bool ans=true;

		if(mp['T']!=1 || mp['i']!=1 || mp['m']!=1 || mp['u']!=1 || mp['r']!=1){
			ans=false;
		}

		if(ans==false){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}



	}


	return 0;
}