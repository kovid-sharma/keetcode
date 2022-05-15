class Solution {
public:
    void solve(vector<vector<int>>&ans,vector<int>&temp,vector<int>&nums,int i)
    {
        ans.push_back(temp);
        for(int idx=i;idx<nums.size();idx++)
        {   
            if(idx==i or nums[idx]!=nums[idx-1]){
            temp.push_back(nums[idx]);
            solve(ans,temp,nums,idx+1);
            temp.pop_back();
            }
            
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>tmp;
        sort(nums.begin(),nums.end());
        solve(ans,tmp,nums,0);
        return ans;
    }
};