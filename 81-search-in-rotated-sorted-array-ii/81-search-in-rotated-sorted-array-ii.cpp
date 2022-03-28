class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        int mid;
        while(l<=h)
        {
            mid= (l+h)/2;
            if(nums[mid]==target)
                return true;
            if(nums[l]==nums[mid] and nums[h]==nums[mid]){
            while(l<nums.size() and h>=0 and nums[l]==nums[mid] and nums[h]==nums[mid])
            {
                l++;
                h--;
            }continue;
            }
            if(nums[l]<=nums[mid]){
                if(nums[l]<=target and target<nums[mid])h=mid-1;
                else l=mid+1;
            }
            else{
                if(nums[h]>=target and nums[mid]<target)l=mid+1;
                else h=mid-1;
            }
        }
        return false;
    }
};
