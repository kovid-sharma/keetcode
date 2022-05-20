class Solution {
public:
    int dfs(int i,int j,vector<vector<int>>&o,vector<vector<int>>&dp)
    {
        if(i==o.size()-1 and j==o[0].size()-1){
            return 1;
        }
        if(i<0 or j<0 or i>=o.size() or j>=o[0].size() or o[i][j]==1)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        return dp[i][j]=dfs(i+1,j,o,dp)+dfs(i,j+1,o,dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& o) {
        int m=o.size();
        int n=o[0].size();
        if(o[0][0]==1 or o[m-1][n-1]==1)
            return 0;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return dfs(0,0,o,dp);
        // return dp[m-1][n-1];
    }
};