class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=0;
        int maxtill=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            curr=max(nums[i],nums[i]+curr);
            maxtill=max(maxtill,curr);
        }
        return maxtill;
    }
};