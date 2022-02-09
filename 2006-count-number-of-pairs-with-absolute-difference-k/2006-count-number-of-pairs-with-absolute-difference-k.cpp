class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        int cnt=0;
        for(auto it:nums)
        {
            cnt+=(mp[it+k]*mp[it]);
            mp[it]=0;
        }
        return cnt;
    }
};