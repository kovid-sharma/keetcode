class Solution {
public:
    int minDistance(string word1, string word2) {
        int sz1=word1.size();
        int sz2=word2.size();
        if(sz1==0 and sz2==0) return 0;
        int dp[sz1+1][sz2+1];
        for(int i=0;i<=sz1;i++)
            dp[i][0]=i;
        for(int i=0;i<=sz2;i++)
            dp[0][i]=i;
        for(int i=1;i<=sz1;i++)
        {
            for(int j=1;j<=sz2;j++)
            {
                if(word1[i-1]==word2[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else
                {
                    int replace= dp[i-1][j-1]+1;
                    int del= dp[i-1][j]+1;
                    int insert= dp[i][j-1]+1;
                    dp[i][j]=min({replace,del,insert});
                }
            }
        }
        return dp[sz1][sz2];
    }
};