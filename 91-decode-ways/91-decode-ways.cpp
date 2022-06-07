class Solution {
public:
    int solve(string &s,int i,vector<int>&dp)
    {
        if(i>s.size())return 0;
        if(i==s.size())return 1;
        
        if(dp[i]!=-1)
            return dp[i];
        
        int ans=0;
        //for each index we can choose to take only that char or choose to include next
        //only now char which is only possible fron 1 to 9
        if(s[i]>='1' and s[i]<='9')
        ans+=solve(s,i+1,dp);
        
        //next including char
        if(s[i]>='1' and s[i]<='2')
        {
            if(i+1<s.size() and (  (s[i]=='1')  or (s[i]=='2' and s[i+1]<='6')  ))
                ans+=solve(s,i+2,dp);
        }
        return dp[i]=ans;
        
    }
    int numDecodings(string s) {
        vector<int>dp(s.size(),-1);
        return solve(s,0,dp);
    }
};