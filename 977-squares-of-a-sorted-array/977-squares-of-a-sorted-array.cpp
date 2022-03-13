class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0;int r=nums.size()-1;
        vector<int>ans(nums.size());
        for(int idx=nums.size()-1;idx>=0;idx--)
        {
            if(abs(nums[r])>abs(nums[l])){
                ans[idx]=nums[r]*nums[r];
                r--;
            }
            else{
               ans[idx]=nums[l]*nums[l];
                l++;
            }
        }
        return ans;
    }
};