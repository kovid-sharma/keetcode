class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans={{}};
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();)
        {
            int cntofequal=0;
            while(cntofequal+i<nums.size() and nums[i]==nums[i+cntofequal])cntofequal++;
            int now=ans.size();
            for(int x=0;x<now;x++)
            {
                vector<int> tmp=ans[x];
                for(int q=0;q<cntofequal;q++)
                {
                    tmp.push_back(nums[i]);
                    ans.push_back(tmp);
                }
            }
            i+=cntofequal;
        }return ans;
    }
    
};