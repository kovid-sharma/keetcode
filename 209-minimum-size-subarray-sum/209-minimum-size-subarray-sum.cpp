class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int mi=INT_MAX;
        for(int i=0;i<n;i++)
            if(nums[i]>=target)
                return 1;
        vector<int>psum(n);
        psum[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            psum[i]=psum[i-1]+nums[i];
        }
        for(int i=n-1;i>=0;i--)
        {   
            if(psum[i]<target)break;
            int j= upper_bound(psum.begin(),psum.end(),psum[i]-target)-psum.begin();
            mi=min(mi,i-j+1);
        }
        return mi==INT_MAX?0:mi;
        
    }
};