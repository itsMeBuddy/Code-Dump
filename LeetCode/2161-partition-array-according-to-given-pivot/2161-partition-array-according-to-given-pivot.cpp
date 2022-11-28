class Solution {
public:
    
    // Question Count mai bhi badhana jaanta hoon
    
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less;
        vector<int> more;
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot)
                less.push_back(nums[i]);
            else if(nums[i] == pivot)
                cnt++;
            else
                more.push_back(nums[i]);
        }
        
        int k = 0;
        for(;k<less.size();k++){
            nums[k] = less[k];
        }
        
        for(int i=0;i<cnt;i++){
            nums[k] = pivot;
            k++;
        }
        
        int temp = k;
        
        for(;k<nums.size();k++){
            nums[k] = more[k-temp];
        }
        
        return nums;
    }
};