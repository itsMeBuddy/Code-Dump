#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

void tc(){
    int n;
    cin>>n;
    
    if(n==2 || n==3){
        cout<<-1<<endl;
        return;
    }
    if(n==4){
        cout<<"2 4 1 3"<<endl;
        return;
    }
    
    
    vector<int> vec(n,0);
    int a=1;
    for(int i=0;i<n;i+=2){
        vec[i]=a;
        a++;
    }
    for(int i=01;i<n;i+=2){
        vec[i]=a;
        a++;
    }
    
    
    display(vec);
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	    tc();
	    
	return 0;
}
