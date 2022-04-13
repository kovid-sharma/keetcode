class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
         int lo=0,high=n-1;
        while(high>lo)
        {
            int mid=(lo+high)/2;
            if(nums[mid]>nums[high]) 
                lo=mid+1;
            else high=mid;
        }
        int idx=lo;
        lo=0;int hi=n-1;
        while(hi-lo>=0)
        {
            int mid=(lo+hi)/2;
            int realmid=(mid+idx)%n;
            if(nums[realmid]==target)return realmid;
            if(nums[realmid]<target)lo=mid+1;
            else hi=mid-1;
        }
        return -1;
    
    }
};