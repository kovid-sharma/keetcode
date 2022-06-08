class Solution {
public:
    // bool solve(int i,vector<int>&nums,vector<int>&dp)
    // {
    //     if(i>=nums.size()-1)return true;
    //     if(dp[i]!=-1)
    //         return dp[i];
    //     for(int jump=1;jump<=nums[i];jump++)
    //     {
    //         if(solve(i+jump,nums,dp))
    //             return dp[i]=1;
    //     }
    //     return dp[i]=0;
    // }
    bool canJump(vector<int>& nums) {
        // bool isPre=false;
        // for(auto it:nums)
        //     if(it==0){
        //         isPre=true;
        //         break;
        //     }
        // if(!isPre)return true;
        // vector<int>dp(nums.size(),-1);
        // return solve(0,nums,dp);
        
        
        
        
        
        int idxMax=0;
        for(int i=0;i<=idxMax;i++)
        {
            if(idxMax>=nums.size()-1)return true;
            idxMax=max(idxMax,nums[i]+i);
        }
        return idxMax>=nums.size()-1;
    }
};