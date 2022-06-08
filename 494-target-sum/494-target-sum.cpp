class Solution {
public:
    int solve(int i,vector<int>&nums,int target,unordered_map<string,int>&dp)
    {
        if(i==nums.size())
        {
            if(target==0)
                return 1;
            return 0;
        }
        string key= to_string(target)+" "+to_string(i);
        if(dp.count(key))
            return dp[key];
        int ans=0;
        ans+=solve(i+1,nums,target-nums[i],dp);
        ans+=solve(i+1,nums,target+nums[i],dp);
        return dp[key]=ans;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        unordered_map<string,int>dp;
        return solve(0,nums,target,dp);
    }
};