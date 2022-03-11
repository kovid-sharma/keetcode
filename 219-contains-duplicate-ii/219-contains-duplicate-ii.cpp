class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k==0)return false;
        int n=nums.size();
        if(k>=n)k=n-1;
        unordered_set<int>st;
        for(int i=0;i<n;i++)
        {
            if(i>k)st.erase(nums[i-k-1]);
            if(st.find(nums[i])!=st.end())
                return true;
            st.insert(nums[i]);
        }
        return false;
    }
};