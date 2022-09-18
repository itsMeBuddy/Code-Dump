#include <bits/stdc++.h>
using namespace std;



    // for(int i=0;i<vec.size();i++){
    //     cout<<vec[i]<<" ";
    //     ans[vec[i]]++;
    // }

void display(int cnt, vector<int> &vec, vector<int> &ans){
    // cout<<"-> ";
    if(cnt==1){
        for(int i=0;i<vec.size();i++){
            ans[vec[i]]+=3;
        }
    }
    else if(cnt==2){
        for(int i=0;i<vec.size();i++){
            ans[vec[i]]+=1;
        }
    }
}

int main(){
	
	int t;
	cin>>t;
	while(t--){
        int n;
		cin>>n;
        map<string,pair<int,vector<int>>> mp;
        for(int i=0;i<n;i++){
            string str;
            cin>>str;
            mp[str].first+=1;
            mp[str].second.push_back(0);
        }
        for(int i=0;i<n;i++){
            string str;
            cin>>str;
            mp[str].first+=1;
            mp[str].second.push_back(1);
        }
        for(int i=0;i<n;i++){
            string str;
            cin>>str;
            mp[str].first+=1;
            mp[str].second.push_back(2);
        }

        vector<int> ans(3,0);

        for(auto it=mp.begin();it!=mp.end();it++){
            // cout<<it->first<<" "<<it->second.first<<" ";
            display(it->second.first, it->second.second, ans);
            // cout<<endl;
        }


        // cout<<endl<<"---->";

        for(int i=0;i<3;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

	}
	return 0;
}