#include <bits/stdc++.h>
#define int long long int
using namespace std;

void tc(){
    int l;
    cin>>l;
    string str;
    cin>>str;
    
    int cntPlus=0, cntMinus=0;
    
    vector<int> nums;
    
    for(int i=0;i<str.size();i++){
        if(str[i]!='-' and str[i]!='+'){
            string temp="";
            temp+=str[i];
            nums.push_back(stoi(temp));
        }
        else{
            if(str[i]=='+')
                cntPlus++;
            else if(str[i]=='-')
                cntMinus++;
        }
    }
    
    string answer;
    
    sort(nums.begin(),nums.end());
    
    for(int i=0;i<nums.size();i++){
        // cout<<nums[i];
        answer+=to_string(nums[i]);
        if(cntMinus!=0){
            answer+="-";
            // cout<<"-";
            cntMinus--;
        }
        else if(cntPlus!=0){
            answer+="+";
            // cout<<"+";
            cntPlus--;
        }
    }
    
    reverse(answer.begin(),answer.end());
    cout<<answer;
    
}

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    tc();
	    cout<<endl;
	}
	return 0;
}
