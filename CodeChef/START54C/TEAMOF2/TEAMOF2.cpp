#include <bits/stdc++.h>
using namespace std;

void display(vector<vector<int>> &vec){
    cout<<"............................................\n";
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<vector<int>> vec(n);
	    
	    for(int i=0;i<n;i++){
	        int k;
	        cin>>k;
	       // vec[i].push_back(k);
	        for(int j=0;j<k;j++){
	            vec[i].push_back(*istream_iterator<int> (cin));
	        }
	    }
	    
	    
	   // display(vec);
	   // cout<<"\n....................."<<endl;
	    
	    
	   // for(int i=0;i<n;i++){
	   //     map<int,int> mp;
	   //     for(int j=0;j<vec[i].size();j++){
	   //         for(int k=0;k<vec[i])
	   //     }
	   // }
	    
	   // /*
	    bool flag=false;
	    for(int i=0;i<vec.size();i++){
	       // map<int,int> mp;
	       // for(int x=1;x<=5;x++)
	       //     mp[x]=0;
	           
            for(int j=0;j<vec.size();j++){
    	        map<int,int> mp;

                for(int k=0;k<vec[i].size();k++){
                    // cout<<vec[i][k]<<" ";
                    mp[vec[i][k]]++;
                }    
                // cout<<endl;
                for(int k=0;k<vec[j].size();k++){
                    // cout<<vec[j][k]<<" ";
                    mp[vec[j][k]]++;
                }    
                // cout<<endl<<"mp->";
                // for(auto x=mp.begin();x!=mp.end();x++){
                //     cout<<x->first<<":"<<x->second<<" ";
                // }
                // if(mp[1]!=0 && mp[2]!=0 && mp[3]!=0 && mp[4]!=0 && mp[5]!=0){
                //     flag=true;
                //     break;
                // }

                if(mp.size()==5){
                    flag=true;
                }
                mp.clear();

            }
        }
        flag ? cout<<"YES"<<endl : cout<<"NO"<<endl;
        // */
	    
	}
	return 0;
}