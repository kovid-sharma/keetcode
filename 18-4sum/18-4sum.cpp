class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>ret;
        if(n<4) return ret;
        if(n==4 and target==0 and nums[0]==0) 
        {
            ret.push_back(vector<int>{0,0,0,0});
            return ret;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++)
        {   
            if(i>0 and nums[i]==nums[i-1]) continue;
            if((nums[i]*1LL+nums[i+1]*1LL+nums[i+2]*1LL+nums[i+3]*1LL)*1LL >target*1LL) break;
            if(nums[i]*1LL+nums[n-3]*1LL+nums[n-2]*1LL+nums[n-1]*1LL<target*1LL) continue;
            for(int j=i+1;j<n-2;j++)
            {
                int l=j+1,r=n-1;
                if(j>i+1 and nums[j]==nums[j-1]) continue;
                if(nums[i]*1LL+nums[j]*1LL+nums[j+1]*1LL+nums[j+2]*1LL>target*1LL+ 0LL) break;
                if(nums[i]*1LL+nums[j]*1LL+nums[n-2]*1LL+nums[n-1]*1LL<target*1LL) continue;
                while(l<r)
                {
                    long long sum=nums[i]*1LL+nums[j]*1LL+nums[l]*1LL+nums[r]*1LL;
                    if(sum<target) l++;
                    else if(sum>target) r--;
                    else
                    {
                        ret.push_back(vector<int>{nums[i],nums[j],nums[l],nums[r]});
                        do{l++;}while(nums[l]==nums[l-1] and l<r);
                        do{r--;}while(nums[r]==nums[r+1] and l<r);
                    }
                }
            }
        }
        return ret;
        
    }
};