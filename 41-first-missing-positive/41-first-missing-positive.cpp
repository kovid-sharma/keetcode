class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums)
            mp[it]++;
        int cnt=1;
        for(auto it:mp){
            if(mp.find(cnt)==mp.end())
                return cnt;
            else
                cnt++;
        }
        return cnt;
            
    }
};