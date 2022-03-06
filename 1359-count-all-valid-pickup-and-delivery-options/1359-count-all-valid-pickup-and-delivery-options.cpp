class Solution {
public:
    int countOrders(int n) {
       vector<long>dp(501);
        dp[1]=1;dp[2]=6;
        long long mod=1e9+7;
        for(int i=3;i<=500;i++)
        {
            long long odd= 2*i-1;
            long long ans= odd*(odd+1);
            ans/=2;
            ans%=mod;
            dp[i]=dp[i-1]*ans;
            dp[i]%=mod;
        }
        return dp[n];
    }
};