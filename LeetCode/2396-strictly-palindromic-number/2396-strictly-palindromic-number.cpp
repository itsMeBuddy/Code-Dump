class Solution {
public:
    
    bool checkPalin(string str){
        string a=str;
        reverse(str.begin(),str.end());
        
        return a==str ? true : false;
    }
    
    bool check(int n,int b){
        string str="";
        while(n){
            str+= to_string(n%b);
            n/=b;
        }
        // reverse(str.begin(),str.end());
        // cout<<b<<":"<<str<<endl;
        return checkPalin(str);
    }
    
    bool isStrictlyPalindromic(int n) {
        for(int b=2;b<=n-2;b++){
            check(n,b);
            if(!check(n,b))
                return false;
        }
        // cout<<endl;
        return true;
    }
};