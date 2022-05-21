class Solution {
public:
    int rec(vector<int>&dp,vector<int>&coins,int mon)
    {
        if(mon==0)
            return 0;
        if(dp[mon]!=-1)return dp[mon];
        int ret=INT_MAX;
        for(int i=0;i<coins.size();i++)
        {  
            if(mon-coins[i]>=0)
            ret=min(ret*1LL,rec(dp,coins,mon-coins[i])+1LL);
        }
        dp[mon]=ret;
        return dp[mon];
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,-1);
        int ans=rec(dp,coins,amount);
        if(ans==INT_MAX)
            return -1;
        return ans;
    }
};