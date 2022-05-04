class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        int ans=0;
        for(auto &it:mp)
        {   
            int num=it.first;
            int cnt=it.second;
            if(2*num==k)
                ans+=cnt/2;
            else if(mp.find(k-num)!=mp.end() and mp[k-num]>0){
                int toSub=min(mp[k-num],cnt);
                mp[num]-=toSub;
                mp[k-num]-=toSub;
                ans+=toSub;
            }
        }
        return ans;
    }
};