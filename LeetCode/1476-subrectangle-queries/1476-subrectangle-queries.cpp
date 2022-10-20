class SubrectangleQueries {
public:
    vector<vector<int>> vec;
    
    vector<vector<int>> changes;
    
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        this->vec = rectangle;
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        changes.push_back({row1,row2,col1,col2,newValue});
    }
    
    int getValue(int row, int col) {
        
        for(int i=this->changes.size()-1; i>=0; i--)
            if(row>=changes[i][0] and row<=changes[i][1] and col>=changes[i][2] and col<=changes[i][3])
                return changes[i][4];
        
        return this->vec[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */