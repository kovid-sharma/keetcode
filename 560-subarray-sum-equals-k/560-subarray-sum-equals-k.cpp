class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      int n=nums.size();
      int ans=0;
      vector<int>prefixsum;
        int tmpsum=0;
      for(int i=0;i<n;i++)
      {   
          tmpsum+=nums[i];
          prefixsum.push_back(tmpsum);
      }
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(k==prefixsum[i])
                ans++;
            if(mp.count(prefixsum[i]-k))
                ans+=mp[prefixsum[i]-k];
            mp[prefixsum[i]]++;
        }
        return ans;
    }
};