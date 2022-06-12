class Solution {
public:
    int solve(int l,int r,vector<int>&nums)
    {
        int su=0;
        if(l==0)
            su=nums[r];
        else
        su= nums[r]-nums[l-1];
        return su;
    }
    int maximumUniqueSubarray(vector<int>& nums) {
       int l=0;int r=0;
        unordered_set<int>st;
        int ans=0;
        vector<int>psum;
        psum.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            psum.push_back(psum.back()+nums[i]);
        }
        while(l<nums.size() and r<nums.size())
        {   
            
            if(st.find(nums[r])!=st.end())
            {
                st.erase(nums[l]);
                l++; 
            }
            else
            {
                st.insert(nums[r]);
                int sum= solve(l,r,psum);
                ans=max(sum,ans);
                r++;
            }
        }
        return ans;
    }
};