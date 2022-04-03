class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n=nums.size(); 
        vector<int>prefix(n);
        vector<int>suffix(n);
        int maxtillnow=0;
        for(int i=0;i<n;i++)
        {
            maxtillnow=max(maxtillnow,nums[i]);
            prefix[i]=maxtillnow;
        }
        int mintillnow=INT_MAX;
        for(int i=n-1;i>=0;i--)
        {
            mintillnow=min(mintillnow,nums[i]);
            suffix[i]=mintillnow;
        }
        int ans=0;
        for(int i=1;i<=n-2;i++)
        {
            if(prefix[i-1]<nums[i] and suffix[i+1]>nums[i])
                ans+=2;
            else if(nums[i-1]<nums[i] and nums[i]<nums[i+1])
                ans++;
        }
        return ans;
    }
};