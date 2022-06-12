class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int pro=1;
        if(k==0)return 0;
        int l=0;
        int r=0;
        int ans=0;
        while(r<nums.size())
        {
            pro*=nums[r];
            while(l<nums.size() and pro>=k)
            {
                pro/=nums[l];
                l++;
            }
            if(r>=l)
            ans+=(r-l+1);
            r++;
        }
        return ans;
    }
};