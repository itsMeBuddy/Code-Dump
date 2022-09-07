#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int temp;
	    int count_neg=0,count_pos=0;
	    for(int i=0;i<n;i++){
	        cin>>temp;
	        temp == -1 ? count_neg++ : count_pos++;
	    }
	    
	    // cout<<count_pos<<"\t"<<count_neg<<endl;
	    
	    int absVal=abs(count_neg-count_pos);
        
        if(absVal<2){
            cout<<"Yes";
        }
        else if(absVal==2){
            if(count_pos%2 == 1 || count_neg%2 == 1)
                cout<<"NO";
            else
                cout<<"Yes";
        }
        else
            cout<<"No";
        cout<<endl;
	    
	    
	}
	return 0;
}
