class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int ch;
        for(int i=0; i<nums.size(); i++){
            if(cnt == 0){
                ch = nums[i];
            }
            if(ch == nums[i]){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return ch;
    }
};