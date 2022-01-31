class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // stl soln
       
        vector<int> ans;
        ans.push_back(-1);
        ans.push_back(-1);
         if(nums.size()==0) return ans;
        if(nums.size()==1)
        {
            if(target!=nums[0])
                return ans;
            else
            {
                ans[0]=0;ans[1]=0;
            }
            return ans;
        }
        int indx= lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        
        if(indx>=0 and indx<nums.size() and nums[indx]==target)
            ans[0]=indx;
        indx= upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(indx>0 and indx<=nums.size() and nums[indx-1]==target)
            ans[1]=indx-1;
        return ans;
    }
};