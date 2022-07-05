class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return 1;
        sort(nums.begin(),nums.end());
        int mLen=1;
        int curr=1;
        for(int i=1;i<nums.size();i++)
        {   
            if(nums[i-1]==nums[i])
                continue;
            if(nums[i-1]+1==nums[i])
            {
                curr++;
            }
            else
            {
                curr=1;
            }
            mLen=max(mLen,curr);
        }
        return mLen;
            
    }
};