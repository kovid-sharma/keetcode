class Solution {
public:
    int solv(vector<int>&nums,int i,int en,vector<int>&dp)
    {
        if(i>=en)
            return 0;
        //takr
        if(dp[i]!=-1)
            return dp[i];
        int part1= nums[i]+solve(nums,i+2,en,dp);   
        //dont
        int part2= solve(nums,i+1,en,dp);
        return dp[i]=max(part1,part2);
    }
    int solve(vector<int>&nums,int i,int en,vector<int>&dp)
    {
        if(i>=en)
            return 0;
        //takr
        if(dp[i]!=-1)
            return dp[i];
        int part1= nums[i]+solve(nums,i+2,en,dp);   
        //dont
        int part2= solve(nums,i+1,en,dp);
        return dp[i]=max(part1,part2);
    }
    int rob(vector<int>& nums) {
        //first recursion
        if(nums.size()==1)
            return nums[0];
        int en=nums.size();
        vector<int>dp(nums.size(),-1);
        vector<int>dpp(nums.size(),-1);
        return max(solve(nums,1,en,dp),solv(nums,0,en-1,dpp));
    }
};