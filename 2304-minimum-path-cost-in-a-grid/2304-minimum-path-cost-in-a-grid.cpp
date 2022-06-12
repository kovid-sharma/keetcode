class Solution {
public:
    int dfs(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&Cost,vector<vector<int>>&dp)
    {
        if(i>=grid.size())
            return 0;
        if(i==grid.size()-1)
            return grid[i][j];//cos aur aage nhi jana aur iss index pe aye hai to sum me add to hoga
        int tmp=INT_MAX;
        if(dp[i][j]!=-1)
            return dp[i][j];
        for(int col=0;col<grid[0].size();col++)
        {
            int curr= grid[i][j]+ Cost[grid[i][j]][col] + dfs(i+1,col,grid,Cost,dp);
            //col is the column to which you jump
            tmp=min(tmp,curr);
        }
        return dp[i][j]=tmp;
    }
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& Cost) {
        //top down
        int ans=INT_MAX;
        int R=grid.size();
        int C=grid[0].size();
        vector<vector<int>>dp(R,vector<int>(C,-1));
        for(int col=0;col<C;col++) //for each column we find what will be the path to end at that col
            ans=min(ans,dfs(0,col,grid,Cost,dp));
        return ans;
    }
};