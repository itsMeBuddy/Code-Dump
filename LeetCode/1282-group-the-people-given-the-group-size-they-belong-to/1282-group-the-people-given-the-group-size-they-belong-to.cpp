class Solution {
public:
    
    // TC -> O(NlogN)
    // SC -> O(N)
    
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int, vector<int>> mp;
        for(int i=0; i<groupSizes.size(); i++){
            mp[groupSizes[i]].push_back(i);
        }
        
        vector<vector<int>> ans;
        
        for(auto it = mp.begin(); it != mp.end(); it++){
            for(int i=0; i<it->second.size();){
                vector<int> temp;
                for(int j=0; j<it->first; j++){
                    temp.push_back(it->second[i]);
                    i++;
                }
                ans.push_back(temp);
            }
        }
        
        return ans;
    }
};