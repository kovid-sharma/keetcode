class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        if(k==0)
            return 0;
       
        long long cnt=0;
        long long curr=0;
        int l=0;
        int r=0;
        while(r<nums.size())
        {
            curr+=nums[r];
            int tmp= r-l+1;
            while(tmp*curr>=k)  //remember = 
            {
                curr-=nums[l];
                l++;
                tmp--;
            }
            cnt+=(r-l)+1;
            r++;
        }
        return cnt;
    }
};