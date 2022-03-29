class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int lo=1;
        int hi=nums.size()-1;
        int cnt;
        while(lo<=hi)
        {
            int mid= (lo+hi)/2;
            cnt=0;
            for(auto it:nums)
            {
                if(it<=mid)
                    cnt++;
            }
            if(cnt<=mid)
                lo=mid+1;
            else
                hi=mid-1;
        }
        return lo;
    }
};
