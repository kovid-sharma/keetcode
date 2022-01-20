class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int>st;
        for(auto it:nums)
        {
            st.insert(it);
        }
        auto it=st.begin();
        k=nums.size()-k;
        advance(it,k);
        return *it;
    }
};