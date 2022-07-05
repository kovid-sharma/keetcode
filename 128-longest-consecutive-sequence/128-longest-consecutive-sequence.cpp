class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        
        unordered_set<int>st(nums.begin(),nums.end());
        int mLen=1;
        for(auto it:nums)
        {
            int curr=1;
            if(st.find(it-1)==st.end())    //start
            {
                while(st.find(it-1+curr)!=st.end())
                {
                    curr++;
                }
            }
            mLen=max(mLen,curr-1);
        }
        return mLen;
    }
};