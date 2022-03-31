class Solution {
public:
    bool ok(vector<int>nums,int mid,int m)
    {   
        int ot=0;
        int s=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]>mid)
                return false;
            if(ot+nums[i]<=mid)
                ot+=nums[i];
            else{
                ot=nums[i];
                m--;
            }
        }
        return m>0;
        
    }
    int splitArray(vector<int>& nums, int m) {
        int ans_min=0;
        int ans_max=1e9;
        while(ans_min<=ans_max)
        {
            int mid= (ans_max+ans_min)/2;
            if(ok(nums,mid,m))
                ans_max=mid-1;
            else
                ans_min=mid+1;
        }
        return ans_min;
    }
};