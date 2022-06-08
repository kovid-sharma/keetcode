class Solution {
public:
    int solve(vector<int>&nums,int i,vector<int>&dp)
    {
        if(i>=nums.size()-1)
        {
            return 0;
        }
        if(dp[i]!=-1)
            return dp[i];
        int ans=1e5;
        for(int jump=1;jump<=nums[i];jump++)
        {
            ans=min(ans,1+solve(nums,i+jump,dp));
        }
        return dp[i]=ans;
    }
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return solve(nums,0,dp);
        //solve function gives the min no of steps for that index
    }
};