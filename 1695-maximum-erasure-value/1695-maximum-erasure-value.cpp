class Solution {
public:
    int solve(int l,int r,vector<int>&psum){
        if(l==0)
            return psum[r];
        else
            return psum[r]-psum[l-1];
    }
    int maximumUniqueSubarray(vector<int>& nums) {
        vector<int>psum;
        psum.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
            psum.push_back(psum.back()+nums[i]);
        
        int ma=INT_MIN;
        int l=0;
        int r=0;
        unordered_set<int>st;
        //contains all unique elements
        
        while(l<nums.size() and r<nums.size())
        {
            if(st.find(nums[r])!=st.end())
            {
                st.erase(nums[l]);
                l++;
            }
            else
            {   
                ma=max(ma,solve(l,r,psum));
                st.insert(nums[r]);
                r++;
            }
        }
        return ma;
        
    }
};