class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> ret;
        for(int i=0;i<n-2;i++)
        {
            if(nums[i]>0)break;
            if(i>0 and nums[i]==nums[i-1])continue;
            int j=i+1,k=n-1;
            while(j<k)
            {
                int sum= nums[i]+nums[j]+nums[k];
                if(sum>0) k--;
                else if(sum<0) j++;
                else
                {
                   ret.push_back(vector<int>{nums[i],nums[j],nums[k]});
                    while(j+1<k and nums[j]==nums[j+1]) j++;
                    while(k-1>j and nums[k]==nums[k-1]) k--;
                    j++;k--;
                }
            }
        }
        return ret;
    }
};

