class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int cnt=0;
        int start,mid,end;
        for(end=2;end<n;end++)
        {
            start=0;
            mid=end-1;
            while(start<mid)
            {
                if(nums[start]+nums[mid]>nums[end])
                {
                    cnt+=mid-start;/* if above if is true then start can increase and hence adding all those pairs*/              mid--;
                }
                else
                    start++;
            }
        }
        
        return cnt;
    }
};