class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        int cnt=0;
        if(k==0)
        {
            for(auto it:nums)
            {
                if(mp[it]>=2)
                {
                    mp[it]=0;
                    cnt++;
                }
                    
            }
            return cnt;
        }
        for(auto it:nums)
        {
            if(mp[it+k]!=0)
            {
                cnt++;
                mp[it+k]=0;
            }
        }
        return cnt;
    }
};