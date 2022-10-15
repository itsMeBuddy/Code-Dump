class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        
        if(nums.size() == 0)
            return ans;
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                long f = long(target) - long(nums[i] + nums[j]);
                long left = long(j+1);
                long right = long(nums.size()-1);
                
                
                
                while(left < right){
                    
                    long two_sum = long(nums[left]+nums[right]);
                    
                    if(two_sum < f)
                        left++;
                    else if(two_sum > f)
                        right--;
                    else{
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[left]);
                        temp.push_back(nums[right]);
                        ans.push_back(temp);
                        
                        while(left < right and temp[2] == nums[left]){
                            left++;
                        } 
                        while(left < right and temp[3] == nums[right]){
                            right--;
                        }
                    }
                }
                while(j<nums.size()-1 and nums[j+1] == nums[j])
                    j++;
            }
            while(i<nums.size()-1 and nums[i+1] == nums[i])
                i++;
        }
        return ans;
    }
};