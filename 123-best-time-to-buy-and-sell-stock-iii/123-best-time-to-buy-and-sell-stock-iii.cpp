class Solution {
public:
    int solve(vector<int>&prices,int n,vector<vector<int>>&dp,int i,int trans)
    {
        if(i==n or trans==0)
            return 0;
        if(dp[i][trans]!=-1)
            return dp[i][trans];
        int ignore= solve(prices,n,dp,i+1,trans);
        int transact=0;
        if(trans%2==0)
        {
           transact-=prices[i];
            transact+=solve(prices,n,dp,i+1,trans-1);
        }
        else
        {
            transact+=prices[i];
            transact+=solve(prices,n,dp,i+1,trans-1);
        }
        return dp[i][trans]=max(ignore,transact);
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(prices.size(),vector<int>(5,-1));
        return solve(prices,n,dp,0,4);
    }
};