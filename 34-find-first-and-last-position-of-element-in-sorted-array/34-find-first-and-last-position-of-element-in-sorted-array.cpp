class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ret(2,-1);
        if(nums.empty())return ret;
        if(!binary_search(nums.begin(),nums.end(),target))return ret;
        int lo=0;
        int hi=nums.size()-1;
        while(lo<hi)
        {
            int mid= lo+(hi-lo)/2;
            if(nums[mid]<target)
                lo=mid+1;
            else
                hi=mid;
        }
        ret[0]=lo;
        hi=nums.size()-1;
        while(lo<hi)
        {
           int mid= (hi+lo+1)/2;
            if(nums[mid]>target)
                hi=mid-1;
            else
                lo=mid; 
        }
        ret[1]=hi;
        return ret;
    }
};