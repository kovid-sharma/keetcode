class Solution {
public:
    int threeSumMulti(vector<int>& nums, int target) {
        int ans=0;
        int n=nums.size();
        int mod=1e9+7;
        vector<int>A(301,0);
        for(int i=0;i<n;i++)
        {
            for(int x=0;x<301;x++)A[x]=0;
            for(int j=i+1;j<n;j++)
            {
                int req=target-nums[i]-nums[j];
                if(req>=0) ans+=A[req];
                ans%=mod;
                A[nums[j]]++;
            }
        }
        return ans%mod;
    }
};