class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto row:matrix)
            for(auto col:row)
                if(col==target)return true;
        return false;
    }
};