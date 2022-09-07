#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    double N,x,y,a,b;
	    cin>>N;
	    cin>>x;
	    cin>>y;
	    cin>>a;
	    cin>>b;
	    double petrolPrice=((double)N/(double)a)*(double)x;
	    double dieselPrice=((double)N/(double)b)*(double)y;
	    if(petrolPrice<dieselPrice)
	        cout<<"PETROL";
	    else if(petrolPrice>dieselPrice)
	        cout<<"DIESEL";
	    else
	        cout<<"ANY";
	    cout<<endl;
	}
	return 0;
}
