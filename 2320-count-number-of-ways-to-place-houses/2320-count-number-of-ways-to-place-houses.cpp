class Solution {
public:
    int mod=1e9+7;
    int solve(vector<int>&dp,int n)
    {
        if(n==1)
            return 2;
        if(n==2)
            return 3;
        if(dp[n]!=-1)
            return dp[n];
        int thisIsH=0;
        int thisIsS=0;
        thisIsH= solve(dp,n-2);
        thisIsS= solve(dp,n-1);
        return dp[n]= (thisIsH%mod+thisIsS%mod)%mod;
    }
    int countHousePlacements(int n) {
        vector<int>dp(n+1,-1);
        long long ans= solve(dp,n);
        return (ans*ans)%mod;
    }
};