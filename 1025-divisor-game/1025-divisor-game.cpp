class Solution {
public:
    bool rec(int n,vector<int>&dp)
    {
        if(n==1)return false;
        if(n==2)return true;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n]=!rec(n-1,dp);
    }
    bool divisorGame(int n) {
        vector<int>dp(n+1,-1);
        return rec(n,dp);
    }
};