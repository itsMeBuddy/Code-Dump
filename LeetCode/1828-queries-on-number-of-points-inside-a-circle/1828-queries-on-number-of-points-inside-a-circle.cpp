class Solution {
public:
    
    float dist(int x, int y, int a, int b){
        return sqrt(pow(x-a,2)+pow(y-b,2));
    }
    
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
            int x = queries[i][0];
            int y = queries[i][1];
            int r = queries[i][2];
            int cnt = 0;
            for(int j=0; j<points.size(); j++){
                int a = points[j][0];
                int b = points[j][1];
                if(dist(x,y,a,b) <= r)
                    cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};