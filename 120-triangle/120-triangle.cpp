class Solution {
public:
    unordered_map<string,int>dp;
    int solve(int r,int c,vector<vector<int>>&grid)
    {
        //basically solve definition is to calculate the minimum path from {i,j}
        
        
        if(r==grid.size()-1)
            return grid[r][c];
        string str=to_string(r)+" "+to_string(c);
        if(dp.find(str)!=dp.end())
            return dp[str];
        
        return dp[str]=grid[r][c]+min(solve(r+1,c,grid),solve(r+1,c+1,grid));
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        return solve(0,0,triangle);
    }
};