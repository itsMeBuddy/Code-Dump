class Solution {
public:
    
    // Using Sparse Table
    // Overflowing in C++ so,
    // TC -> O(n^2)
    // SC -> O(1001*1001)
    
    int Pascal[1001][1001];
    int n = 1;
    
    int triangularSum(vector<int>& nums){
        
        for(;n<=nums.size();n++){
            for(int i=0;i<n;i++){
                Pascal[n][i] = i==0 ? 1 : (Pascal[n-1][i-1] + Pascal[n-1][i]) % 10; 
            }
        }
   
        int ans = 0;       
        for(int i=0;i<nums.size();i++){
            ans += (nums[i]*Pascal[nums.size()][i]) % 10;
        }
        
        return ans % 10;
    }
};