class Solution {
public:
    void rec(vector<int>&ans,int i,vector<int>&nums){
        if(i==nums.size())
            return;
        int last=ans.back();
        ans.push_back(last+nums[i]);
        rec(ans,i+1,nums);
    }
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
        ans.push_back(nums[0]);
        rec(ans,1,nums);
        return ans;
    }
};