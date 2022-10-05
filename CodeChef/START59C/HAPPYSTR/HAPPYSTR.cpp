#include <iostream>
using namespace std;

bool check(char ch){
    if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u')
        return true;
    return false;
}

void tc(){
    string str;
    cin>>str;
    bool ans = false;
    for(int i=0;i<str.size()-2;i++){
        if(check(str[i]) and check(str[i+1]) and check(str[i+2])){
            ans = true;
            break;
        }
    }
    
    ans ? cout<<"Happy"<<endl : cout<<"Sad"<<endl;
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	    tc();
	return 0;
}
