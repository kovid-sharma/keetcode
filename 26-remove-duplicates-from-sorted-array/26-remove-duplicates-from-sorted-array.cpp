class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=1)return nums.size();
        int indx=1;
        for(int i=1;i<nums.size();i++)
            if(nums[i]!=nums[indx-1])
            {
                nums[indx]=nums[i];
                indx++;
            }
        
        return indx;
    }
};