class Solution {
public:
    int dp[100001];
    bool helper(int n)
    {
        if(n<=0) return false;
        if(dp[n]!=-1) return dp[n]==1?true:false;
        bool falg=true;
        for(int i=1;i*i<=n;i++)
        {
            if(helper(n-i*i)==false)
            {   
                falg=false;
                dp[n]=0; 
            }  
        }
        if(falg==true)
        {
            dp[n]=0;
           return false;
        }
        dp[n]=1;
        return true;
        
    }
    bool winnerSquareGame(int n) {
        memset(dp,-1,sizeof(dp));
        return helper(n);
    }
};