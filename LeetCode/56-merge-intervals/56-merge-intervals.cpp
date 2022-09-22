class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> merged;
        vector<int> curr = intervals[0];
        
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0] <= curr[1]){
                curr[1]=max(intervals[i][1],curr[1]);
            }
            else{
                merged.push_back(curr);
                curr=intervals[i];
            }
        }
        merged.push_back(curr);
        
        return merged;
    }
};