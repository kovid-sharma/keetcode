class Solution {
public:
    int specialArray(vector<int>& nums) {
        int lo=1;
        int hi=*max_element(nums.begin(),nums.end());
        while(lo<=hi)
        {
            int mid= (hi+lo)/2;
            int cnt=0;
            for(auto &it:nums)
            {
                if(it>=mid)
                    cnt++;
            }
            if(cnt==mid)
                return mid;
            else if(cnt<mid)
                hi=mid-1;
            else
                lo=mid+1;
        }
        return -1;
    }
};