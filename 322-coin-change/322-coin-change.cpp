class Solution {
public:
    int rec(vector<int>&dp,vector<int>&coins,int mon)
    {
        if(mon==0)
            return dp[0]=0;
        if(dp[mon]!=-1)
            return dp[mon];
        int ans=INT_MAX;
        for(auto it:coins)
        {
            if(mon-it>=0)
                ans=min(ans*1LL,rec(dp,coins,mon-it)+1LL);
        }
        return dp[mon]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,-1);
        return rec(dp,coins,amount)==INT_MAX?-1:dp[amount];
    }
};