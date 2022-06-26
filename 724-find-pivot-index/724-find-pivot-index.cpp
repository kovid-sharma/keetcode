class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        //can answer be 0 or n-1
        if(sum-nums[0]==0)
            return 0;
        int curr=0;
        for(int i=1;i<nums.size();i++)
        {
            curr+=nums[i-1];
            if(curr==sum-curr-nums[i])
            {
                return i;
            }
        }
        return -1;
    }
};