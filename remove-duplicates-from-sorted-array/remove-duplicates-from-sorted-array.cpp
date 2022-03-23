class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx=0;
        for(auto it:nums)
        {
            if(it!=nums[idx]){
                nums[idx+1]=it;
                idx++;
            }
        }
        return ++idx;
    }
};