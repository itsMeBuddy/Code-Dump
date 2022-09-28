class Solution {
public:
    double myPow(double x, int n) {

        long double ans = 1.0;
        long temp = abs(n);
    
        while(temp){
            if(temp%2 == 0){
                x *= x;
                temp/=2;
            }
            else{
                ans *= x;
                temp--;
            }
        }
        
        if(n<0){
            return 1.0/double(ans);
        }
        
        return ans;
    }
};