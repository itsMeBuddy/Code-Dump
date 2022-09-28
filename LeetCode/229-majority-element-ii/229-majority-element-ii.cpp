class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1 = INT_MIN;
        int num2 = INT_MIN;
        int cnt1 = 0;
        int cnt2 = 0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i] == num1){
                cnt1++;
            }
            else if(nums[i] == num2){
                cnt2++;
            }
            else if(cnt1 == 0){
                num1 = nums[i];
                cnt1++;
            }
            else if(cnt2 == 0){
                num2 = nums[i];
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        
        cnt1 = cnt2 = 0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i] ==num1)
                cnt1++;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] ==num2)
                cnt2++;
        }
        
        vector<int> ans;
        
        if(cnt1 > floor(nums.size()/3.0))
            ans.push_back(num1);
        if(cnt2 > floor(nums.size()/3.0))
            ans.push_back(num2);
        
        
        cout<<num1<<" "<<num2;
        
        return ans;
        
    }
};