class Solution {
public:
    
    int func(int i,int j,string &w1,string &w2,vector<vector<int>>&dp)
    {
        if(i<0 or j<0)
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int ans=INT_MIN;
        
        ans=max(func(i-1,j,w1,w2,dp),func(i,j-1,w1,w2,dp));
        int tmp=0;
        if(w1[i]==w2[j])
            tmp=1;
        ans=max(ans,func(i-1,j-1,w1,w2,dp)+tmp);
        
        return dp[i][j]=ans;
        
    }
    int longestCommonSubsequence(string text1, string text2) {
        int idx1=text1.size();
        int idx2=text2.size();
        vector<vector<int>>dp(1003,vector<int>(1003,-1));
        return func(idx1-1,idx2-1,text1,text2,dp);
    }
};