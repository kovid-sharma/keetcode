class Solution {
public:
    void solve(vector<vector<int>>&ans,vector<int>&nums,int i)
    {
        if(i==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++)
        {
            swap(nums[j],nums[i]);
            solve(ans,nums,i+1);
            swap(nums[j],nums[i]);
        }
            
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        solve(ans,nums,0);
        return ans;
    }
};