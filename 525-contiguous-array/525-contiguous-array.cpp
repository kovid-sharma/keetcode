class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
            if(nums[i]==0)nums[i]=-1;
        int len=0;int tmp=0;
        for(int i=0;i<n;i++)
        {
            tmp+=nums[i];
            if(tmp==0)
                len=max(len,i+1);
        }
        tmp=0;
        unordered_map<int,int>mp;
        for(int i=1;i<n;i++)
        {
           tmp+=nums[i];
           if(tmp!=0 and mp.find(tmp)==mp.end())
               mp[tmp]=i;
            if(tmp!=0 and mp.find(tmp)!=mp.end())
                len=max(len,i-mp[tmp]);
            if(tmp==0)
                len=max(len,i);
        }
        return len;
        
    }
};