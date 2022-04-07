class Solution {
public:
    int fun(int r,int c,vector<vector<int>>&A,vector<vector<int>>&dp)
    {
        if(r==0 or c==0)
            return 0;
        if(A[r-1][c-1]==1)
            return 0;
        if(r==1 and c==1)
            return 1;
        if(dp[r][c]>0)return dp[r][c];
        return dp[r][c]=fun(r-1,c,A,dp)+fun(r,c-1,A,dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& A) {
        int r=A.size();
        int c=A[0].size();
        vector<vector<int>>dp(r+1,vector<int>(c+1,0));
        return fun(r,c,A,dp);
    }
};