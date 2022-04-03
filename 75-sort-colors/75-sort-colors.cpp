class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        while(r>=l)
        {
            if(nums[r]==0 and nums[l]!=0){
                swap(nums[r],nums[l]);
                l++;
                r--;
            }
            else if(nums[r]==0 and nums[l]==0)
                l++;
            else
                r--;
        }
        int left;
        for(int i=0;i<nums.size();i++)
            if(nums[i]!=0)
            {
                left=i;
                break;
            }
        int rght=nums.size()-1;
        while(rght>=left)
        {
            if(nums[rght]==1 and nums[left]==2)
            {
                swap(nums[left],nums[rght]);
                left++;
                rght--;
            }
            else if(nums[rght]==1 and nums[left]==1)
                left++;
            else
                rght--;
        }
    }
};