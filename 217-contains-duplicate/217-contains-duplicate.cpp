class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //one attempt submit challenge
        unordered_set<int>st;
        for(auto it:nums)
        {
            if(st.find(it)!=st.end())
                return true;
            st.insert(it);
        }
        return false;
    }
};