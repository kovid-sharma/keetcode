class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int now=0;
        int sz=nums.size();
        int res=0;
        while(now<=sz)
        {
           res^=now;
            now++;
        }
        for(auto &it:nums)
        {
            res^=it;
        }
        return res;
    }
};