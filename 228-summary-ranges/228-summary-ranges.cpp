class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        vector<string>ans;
        if(n==0)return ans;
        int idx=0;
        while(idx<n)
        {
            int from=idx;int end=idx;
            while(end<n-1 and nums[end+1]==nums[end]+1)
                end++;
            if(end==from)
            {
                ans.push_back(to_string(nums[end]));
                idx=end+1;
                continue;
            }
            ans.push_back(to_string(nums[from])+"->"+to_string(nums[end]));
            idx=end+1;
        }
        return ans;
    }
};