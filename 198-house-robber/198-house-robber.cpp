class Solution {
public:
    int solve(vector<int>&nums,int i,vector<int>&dp){
        if(i>=nums.size())
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        //take
        int part1= nums[i]+solve(nums,i+2,dp);
        //dont
        int part2= solve(nums,i+1,dp);
        return dp[i]=max(part1,part2);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
       return solve(nums,0,dp);
    }
};