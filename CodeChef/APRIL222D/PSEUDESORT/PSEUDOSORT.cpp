#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr,arr2;
        while(n--){
            int temp;
            cin>>temp;
            arr.push_back(temp);
            arr2.push_back(temp);
        }
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                break;
            }
        }
        sort(arr2.begin(),arr2.end());
        
        if(arr==arr2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
	}
	return 0;
}
