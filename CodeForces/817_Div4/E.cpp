#include <bits/stdc++.h>
#define int long long
using namespace std;

void ans(int a, int b, int c, int d, vector<pair<int,int>> &sq){
    
    int sumAns=0;
    for(int i=0;i<sq.size();i++){

        // cout<<"-->"<<sq[i].first<<" "<<sq[i].second<<endl;
        // int a1=0;
        // int a2=0;
        bool flag=true;
        if(a>=sq[i].first or b>=sq[i].second){
            // a1=sq[i][0]*sq[i][1];
            flag=false;
        }
        if(sq[i].first>=c or sq[i].second>=d){
            flag=false;
            // a2=sq[i][0]*sq[i][1];
        }

        if(flag){
            // cout<<".";
            sumAns+=(sq[i].first*sq[i].second);
        }
    }
    cout<<sumAns;
}

signed main(){
	
	int t;
	cin>>t;
	while(t--){
        int n,q;
		cin>>n>>q;
        vector<pair<int,int>> sq;
        for(int i=0;i<n;i++){
            int t1,t2;
            cin>>t1>>t2;
            sq.push_back(make_pair(t1,t2));
            // sq[i].push_back(t1);
            // sq[i].push_back(t2);
        }

        // vector<vector<int>> qu;
        for(int i=0;i<q;i++){
            int a,b,c,d;
            cin>>a>>b>>c>>d;
            
            ans(a,b,c,d,sq);

            // qu[i].push_back(a);
            // qu[i].push_back(b);
            // qu[i].push_back(c);
            // qu[i].push_back(d);
            cout<<endl;

        }

        // cout<<endl;
	}
	return 0;
}