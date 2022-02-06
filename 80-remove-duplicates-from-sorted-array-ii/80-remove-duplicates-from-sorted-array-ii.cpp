class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //brute
        if(nums.size()<=2)return nums.size();
        vector<int>cpy;
        cpy.push_back(nums[0]);
        cpy.push_back(nums[1]);
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-2])
            {
                cpy.push_back(nums[i]);
            }
        }
        for(int i=0;i<cpy.size();i++)
            nums[i]=cpy[i];
        return cpy.size();
    }
};