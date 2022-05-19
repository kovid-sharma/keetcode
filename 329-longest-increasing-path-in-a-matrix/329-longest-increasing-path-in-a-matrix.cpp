class Solution {
public:
    int dfs(int r,int c,int i,int j,vector<vector<int>>& matrix,int prev,vector<vector<int>>&dp)
    {
        if(i<0 or j<0 or i>=r or j>=c or prev>=matrix[i][j])
            return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int x1=dfs(r,c,i+1,j,matrix,matrix[i][j],dp);
        int x2=dfs(r,c,i,j-1,matrix,matrix[i][j],dp);
        int x3=dfs(r,c,i,j+1,matrix,matrix[i][j],dp);
        int x4=dfs(r,c,i-1,j,matrix,matrix[i][j],dp);
        return dp[i][j]=max({x1,x2,x3,x4})+1;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<vector<int>>dp(r,vector<int>(c,-1));
        int ans=0;
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                ans=max(ans,dfs(r,c,i,j,matrix,-1,dp));
        return ans;
    }
};