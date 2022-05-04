class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        int l=0;
        int h=nums.size()-1;
        while(l<h)
        {
            if(nums[l]+nums[h]==k){
                cnt++;
                l++;
                h--;
            }
            else if(nums[l]+nums[h]>k)
                h--;
            else l++;
        }
        return cnt;
    }
};