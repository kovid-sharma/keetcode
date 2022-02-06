class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //brute
        if(nums.size()<=2)return nums.size();
        int indx=2;
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i]!=nums[indx-2])
            {   
               nums[indx]=nums[i]; 
               indx++;
            }
        }
        
        return indx;
    }
};