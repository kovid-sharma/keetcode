class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int cnt=0;
        int req=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(req>nums[i])cnt+=req-nums[i];
            req=max(req,nums[i]);
            req++;
        }
        return cnt;
    }
};