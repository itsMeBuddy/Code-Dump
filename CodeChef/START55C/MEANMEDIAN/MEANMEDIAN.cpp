#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &vec){
    cout<<vec[0]<<" "<<vec[1]<<" "<<vec[2]<<endl;
}

void tc(){
    int x,y;
    cin>>x;
    cin>>y;
    vector<int> vec;
    vec.push_back(y);
    vec.push_back(y);
    vec.push_back(3*x-2*y);
    sort(vec.begin(),vec.end());
    // cout<<y<<" "<<y<<" "<<3*x-2*y;
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