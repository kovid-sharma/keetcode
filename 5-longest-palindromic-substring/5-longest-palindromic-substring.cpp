class Solution {
public:
    int ms=0;int me=0;//var for max r-l+1 string
    int ans=1;
    int solve(int s,int e,vector<vector<int>>&dp,string &str)
    {
        if(s>=e)
            return true;
        if(dp[s][e]!=-1)
            return dp[s][e];
        if(str[e]==str[s] and solve(s+1,e-1,dp,str))
        {
            
            ans=max(ans,e-s+1);
            if(ans==e-s+1)
            {
                ms=s;
                me=e;
            }
            return dp[s][e]=1;
        }
        else
        {   
            solve(s+1,e,dp,str);
            solve(s,e-1,dp,str);
            return dp[s][e]=0;
        }
    }
    string longestPalindrome(string s) {
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        for(int i=0;i<n;i++)
            dp[i][i]=1;
        //dp stores -1 if not solve
        //stores 1 if substring btw i and j is palindrome
        //stores 0 is substring btw i and j is not.
        
        
        solve(0,n-1,dp,s);
        return s.substr(ms,me-ms+1);
    }
};