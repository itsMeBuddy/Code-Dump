#include <bits/stdc++.h>
#define int long long int
using namespace std;

void tc(){
    int n;
    cin>>n;
    vector<int> vec;
    int countEven = 0;
    int ones = 0;
    int countOdd = 0;
    while(n--){
        int temp;
        cin>>temp;
        if(temp%2 == 0){
            countEven++;
        }
        // else if(temp == 1)
        //     ones++;
        else{
            countOdd++;
        }
        vec.push_back(temp);
    }
    
    if(countOdd > 0){
        cout<<countEven<<endl;
    }
    else{
        cout<<countOdd<<endl;
    }
    
}

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    tc();
	}
	return 0;
}
