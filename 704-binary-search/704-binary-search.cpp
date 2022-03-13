class Solution {
public:
    int search(vector<int>& nums, int target) {
        int h=nums.size()-1;
        int l=0;
        while(h-l>1)
        {   
            int mid=(h+l)/2;
            if(nums[mid]>target){
                h=mid;
            }
            else if(nums[mid]<target)
                l=mid;
            else
                return mid;
        }
        if(nums[l]==target)
            return l;
        if(nums[h]==target)
            return h;
        return -1;
    }
};