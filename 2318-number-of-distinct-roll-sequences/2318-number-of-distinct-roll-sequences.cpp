class Solution {
public:
    int dp[10001][7][7];
    int mod=1e9+7;
    int solve(int st,int n,int last,int sec){
        if(st==n)
            return 1;
        if(dp[st][last][sec]!=-1)
            return dp[st][last][sec];
        int ans=0;
        for(int i=1;i<=6;i++)
        {
            if(i==last or i==sec or (gcd(i,last)!=1 and last!=0))
                continue;
            ans=(ans+solve(st+1,n,i,last))%mod;
        }
        return dp[st][last][sec]=ans;
    }
    int distinctSequences(int n) {
        memset(dp,-1,sizeof(dp));
        return solve(0,n,0,0);
    }
};
