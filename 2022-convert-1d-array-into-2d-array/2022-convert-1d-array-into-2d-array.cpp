class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int cells= original.size();
        vector<vector<int>>emp;
        if(m*n!=cells)return emp;
        vector<vector<int>>ret(m,vector<int>(n));
        for(int i=0;i<cells;i++)
        {
            ret[i/n][i%n]=original[i];
        }return ret;
    }
};