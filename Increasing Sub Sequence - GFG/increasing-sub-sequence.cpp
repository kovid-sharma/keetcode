// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int maxLength(string S)
    {
        // code here
        vector<int>dp(S.size(),1);
        for(int i=0;i<S.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(S[j]<S[i])
                {
                    if(dp[i]<dp[j]+1)
                    {
                        dp[i]=dp[j]+1;
                    }
                }
            }
        }
        int ans=1;
        for(auto it:dp)
        {
            ans=max(ans,it);
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout << ob.maxLength(S) << endl;
    }
    return 0; 
}  // } Driver Code Ends