class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr=0,m=0;
        for(auto &it:nums){
            if(it)
                curr++;
            else
                curr=0;
            m=max(m,curr);
        }
        return m;
    }
};