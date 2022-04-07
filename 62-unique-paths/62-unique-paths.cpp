class Solution {
public:
    
    int rec(int m,int n,vector<vector<int>>&dp)
    {  
        if(dp[m][n]!=0)
            return dp[m][n];
        if(m==0 or n==0)
            return 0;
        if(m==1 and n==1)
            return 1;
        return dp[m][n]=rec(m-1,n,dp)+rec(m,n-1,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        return rec(m,n,dp);
    }
};