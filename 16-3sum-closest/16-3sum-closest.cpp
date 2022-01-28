class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int m=INT_MAX;
        int n=nums.size();
        int ret;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            int j=i+1,k=n-1;
            while(j<k)
            {
                int sum= nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<m)
                {
                    m=abs(sum-target);
                    ret=sum;
                }
                if(sum>target)k--;
                else if(sum<target)j++;
                else
                {
                    return target;
                }
            }
        }
        return ret;
    }
};