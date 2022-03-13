class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        if(nums[h]<target)
            return nums.size();
        if(nums[0]>target)return 0;
        while(h-l>=1)
        {
            int mid= (h+l)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                h=mid;
            else
                l=mid+1;
        }
        return l;
    }
};