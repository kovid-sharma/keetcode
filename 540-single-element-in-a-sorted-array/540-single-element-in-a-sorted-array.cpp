class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n= nums.size();
        int lo=0;
        int hi=n-1;
        while(lo<=hi)
        {
            int mid= lo+(hi-lo)/2;
            if(mid and nums[mid]==nums[mid-1])
            {
                if((mid-lo)%2) lo=mid+1;
                else hi=mid-2;
            }
            else if(mid+1<n and nums[mid]==nums[mid+1])
            {
                if((mid-lo)%2==0) lo=mid+2;
                else hi=mid-1;
            }
            else
            {
                return nums[mid];
            }       
        }
        return 0; 
    }
};