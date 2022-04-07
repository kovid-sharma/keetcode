class Solution {
public:
    int getMaximumGenerated(int n) {if(!n)return 0;
        vector<int>dp(n+2);
        dp[0]=0;dp[1]=1;
        int ma=1;
        for(int i=2;i<=n;i++)
        {
            if(i%2){
                dp[i]=dp[i/2]+dp[i/2 + 1];
                ma=max(ma,dp[i]);
            }
            else
                dp[i]=dp[i/2];
        }
        return ma;
    }
};